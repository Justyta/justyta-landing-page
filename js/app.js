// Main Alpine.js Application
document.addEventListener('alpine:init', () => {
    Alpine.data('app', () => ({
        currentLang: 'en',
        
        // Translation function
        __(key) {
            const keys = key.split('.');
            let value = translations[this.currentLang];
            for (const k of keys) {
                value = value?.[k];
            }
            return value || key;
        },
        
        // Switch language
        switchLang(lang) {
            this.currentLang = lang;
            document.documentElement.setAttribute('lang', lang);
            document.documentElement.setAttribute('dir', lang === 'ar' ? 'rtl' : 'ltr');
        },

        // FAQ functionality
        openFaq: null,
        toggleFaq(index) {
            this.openFaq = this.openFaq === index ? null : index;
        },

        // Mobile menu
        mobileMenuOpen: false,
        toggleMobileMenu() {
            this.mobileMenuOpen = !this.mobileMenuOpen;
        },

        // Statistics counters
        satisfactionCounter: createStatCounter(100, '%'),
        casesCounter: createStatCounter(350, '+'),
        adviceCounter: createStatCounter(500, '+'),
        branchesCounter: createStatCounter(250, '+'),

        // Initialize intersection observers for stats
        initStatsObserver(element, counter) {
            const observer = new IntersectionObserver((entries) => {
                entries.forEach(entry => {
                    if (entry.isIntersecting) {
                        counter.startCounting();
                    }
                });
            });
            observer.observe(element);
        }
    }));
    
    // Language Switcher Component
    Alpine.data('languageSwitcher', () => ({
        currentLang: 'en',
        
        switchLanguage(lang) {
            this.currentLang = lang;
            // Dispatch event to main app
            this.$dispatch('language-changed', { lang });
        }
    }));
    
    // Mobile Menu Component
    Alpine.data('mobileMenu', () => ({
        isOpen: false,
        
        toggle() {
            this.isOpen = !this.isOpen;
        },
        
        close() {
            this.isOpen = false;
        }
    }));
    
    // FAQ Component
    Alpine.data('faqSection', () => ({
        openItem: null,
        
        toggle(index) {
            this.openItem = this.openItem === index ? null : index;
        }
    }));
});
