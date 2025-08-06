<!DOCTYPE html>
<html lang="en" x-data="{ currentLang: 'en' }">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>JUSTYTA - Expert Legal Services</title>
    
    <!-- Tailwind CSS -->
    <script src="https://cdn.tailwindcss.com"></script>
    
    <!-- Alpine.js -->
    <script defer src="https://unpkg.com/alpinejs@3.x.x/dist/cdn.min.js"></script>
    
    <!-- Google Fonts -->
    <link href="https://fonts.googleapis.com/css2?family=Cinzel+Decorative:wght@400;700&display=swap" rel="stylesheet">
    <link href="https://fonts.googleapis.com/css2?family=Instrument+Sans:wght@400;500;600;700&display=swap" rel="stylesheet">
    
    <!-- Font Awesome for icons -->
    <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/6.4.0/css/all.min.css">
    
    <script>
        // Tailwind config
        tailwind.config = {
            theme: {
                extend: {
                    colors: {
                        'brand': {
                            'white': '#FFFFFF',
                            'maroon': '#421111',
                            'gold': '#C4AF7E',
                            'green': '#04502E',
                            'cream': '#F7F5F2',
                            'charcoal': '#2B0B0B',
                            'lime': '#6BBF6B',
                            'beige': '#EADDC4',
                            'teal': '#0A4D4D',
                        }
                    },
                    fontFamily: {
                        'sans': ['Instrument Sans', 'ui-sans-serif', 'system-ui', 'sans-serif'],
                        'decorative': ['Cinzel Decorative', 'cursive'],
                    }
                }
            }
        }
        
        // Complete translation data
        const translations = {
            en: {
                hero: {
                    heading: "Turn Views into Revenue",
                    sub1: "Instant access to <span class=\"text-brand-gold\">Top legal experts</span>.",
                    sub2: "Seamless consultations — <span class=\"text-brand-green\">Secure</span>, <span class=\"text-brand-gold\">100% Efficient</span>, and <span class=\"text-brand-green\">Transparent</span>.",
                    sub3: "<span class=\"text-brand-maroon\">Legal advice</span>, anytime and anywhere, at your <span class=\"text-brand-gold\">fingertips</span>.",
                    book_now: "Book Now",
                    video_title: "Watch Our Introduction"
                },
                problem: {
                    title: "Your Business Challenges",
                    subtitle: "We understand the obstacles you face every day. Let us help you solve them with proven solutions.",
                    cards: [
                        { title: "Low Visibility", text: "Your business needs more exposure to grow. We help you get noticed." },
                        { title: "High Costs", text: "We deliver cost-effective solutions that save you money." },
                        { title: "Inefficient Processes", text: "Streamline operations and boost efficiency with our expertise." },
                        { title: "Slow Growth", text: "Stagnant metrics? We accelerate sustainable scaling." }
                    ]
                },
                services: {
                    badge: "WHY CHOOSE US",
                    heading: "JUSTICE SERVED WITH\nLAWPOINT — YOUR RIGHTS.",
                    description: "Navigating the law isn't easy. We provide essential skills in court representation, critical thinking, and effective communication. At Lawpoint, we are committed to upholding justice and protecting your rights.",
                    stats: {
                        satisfaction: { label: "Customer Satisfaction" },
                        cases: { label: "Cases Solved" },
                        advice: { label: "Legal Advice Given" },
                        branches: { label: "Partner Offices" }
                    }
                },
                portfolio: {
                    title: "Our Success Stories",
                    subtitle: "Explore our portfolio of successful legal cases and satisfied clients",
                    cases: [
                        { title: "Corporate Merger", description: "Successfully facilitated a $50M merger between two tech companies" },
                        { title: "Personal Injury Victory", description: "Secured $2M settlement for client in complex injury case" },
                        { title: "Intellectual Property", description: "Protected client's patents worth over $10M in market value" }
                    ]
                },
                testimonials: {
                    title: "What Our Clients Say",
                    subtitle: "Real feedback from real people who trust us with their legal matters",
                    reviews: [
                        { name: "Sarah Johnson", role: "CEO, TechCorp", text: "JUSTYTA provided exceptional legal counsel during our expansion. Professional and results-driven." },
                        { name: "Ahmed Al-Rashid", role: "Business Owner", text: "Outstanding service in Arabic and English. They understood our cultural needs perfectly." },
                        { name: "Maria Garcia", role: "Entrepreneur", text: "From contract review to litigation support, they've been our trusted legal partner." }
                    ]
                },
                about: {
                    title: "About JUSTYTA",
                    subtitle: "Your trusted legal partner with decades of experience",
                    description: "Founded on principles of justice, integrity, and excellence, JUSTYTA has been serving clients across diverse legal needs for over 15 years. Our multilingual team combines deep legal expertise with cultural understanding.",
                    values: [
                        { title: "Integrity", description: "We uphold the highest ethical standards in all our practices" },
                        { title: "Excellence", description: "Committed to delivering superior legal solutions" },
                        { title: "Accessibility", description: "Legal services available in multiple languages" }
                    ]
                },
                faq: {
                    title: "Frequently Asked Questions",
                    subtitle: "Find answers to common questions about our legal services",
                    items: [
                        { question: "What types of legal services do you offer?", answer: "We provide comprehensive legal services including corporate law, personal injury, family law, contract disputes, and intellectual property protection." },
                        { question: "Do you offer consultations in Arabic?", answer: "Yes, we provide full legal services in both English and Arabic with native-speaking attorneys." },
                        { question: "How much do your services cost?", answer: "Our fees vary depending on the complexity of the case. We offer transparent pricing and free initial consultations." },
                        { question: "How quickly can I get legal help?", answer: "We offer same-day consultations for urgent matters and typically respond within 24 hours for all inquiries." }
                    ]
                },
                cta: {
                    title: "Ready to Get Started?",
                    subtitle: "Contact us today for your free legal consultation",
                    button: "Get Free Consultation",
                    phone: "+1 (555) 123-4567",
                    email: "info@justyta.com"
                },
                footer: {
                    description: "Your trusted partner in legal matters. Excellence, integrity, and results.",
                    services_title: "Legal Services",
                    services: ["Corporate Law", "Personal Injury", "Family Law", "Contract Disputes"],
                    contact_title: "Contact Info",
                    contact: {
                        address: "123 Legal Plaza, Downtown",
                        phone: "+1 (555) 123-4567",
                        email: "info@justyta.com"
                    },
                    links_title: "Quick Links",
                    links: ["About Us", "Services", "Contact", "Privacy Policy"],
                    copyright: "© 2025 JUSTYTA. All rights reserved."
                }
            },
            ar: {
                hero: {
                    heading: "حول المشاهدات إلى إيرادات",
                    sub1: "وصول فوري إلى <span class=\"text-brand-gold\">أفضل الخبراء القانونيين</span>.",
                    sub2: "استشارات سلسة — <span class=\"text-brand-green\">آمنة</span>، <span class=\"text-brand-gold\">فعالة 100%</span>، و<span class=\"text-brand-green\">شفافة</span>.",
                    sub3: "<span class=\"text-brand-maroon\">المشورة القانونية</span>، في أي وقت وفي أي مكان، في <span class=\"text-brand-gold\">متناول يدك</span>.",
                    book_now: "احجز الآن",
                    video_title: "شاهد مقدمتنا"
                },
                problem: {
                    title: "التحديات التجارية الخاصة بك",
                    subtitle: "نحن نفهم العقبات التي تواجهها كل يوم. دعنا نساعدك في حلها بحلول مثبتة.",
                    cards: [
                        { title: "ضعف الظهور", text: "يحتاج عملك إلى مزيد من التعرض للنمو. نحن نساعدك على الظهور." },
                        { title: "التكاليف العالية", text: "نقدم حلولاً فعالة من حيث التكلفة توفر لك المال." },
                        { title: "العمليات غير الفعالة", text: "تبسيط العمليات وزيادة الكفاءة بخبرتنا." },
                        { title: "النمو البطيء", text: "مقاييس راكدة؟ نحن نسرع التوسع المستدام." }
                    ]
                },
                services: {
                    badge: "لماذا تختارنا",
                    heading: "العدالة تُقدم مع\nLAWPOINT — حقوقك.",
                    description: "الملاحة في القانون ليست سهلة. نحن نقدم مهارات أساسية في التمثيل في المحكمة والتفكير النقدي والتواصل الفعال. في Lawpoint، نحن ملتزمون بدعم العدالة وحماية حقوقك.",
                    stats: {
                        satisfaction: { label: "رضا العملاء" },
                        cases: { label: "القضايا المحلولة" },
                        advice: { label: "المشورة القانونية المقدمة" },
                        branches: { label: "المكاتب الشريكة" }
                    }
                },
                portfolio: {
                    title: "قصص نجاحنا",
                    subtitle: "استكشف محفظة القضايا القانونية الناجحة والعملاء الراضين",
                    cases: [
                        { title: "اندماج الشركات", description: "نجحنا في تسهيل اندماج بقيمة 50 مليون دولار بين شركتي تكنولوجيا" },
                        { title: "انتصار الإصابة الشخصية", description: "حصلنا على تسوية بقيمة 2 مليون دولار للعميل في قضية إصابة معقدة" },
                        { title: "الملكية الفكرية", description: "حماية براءات اختراع العميل بقيمة تزيد عن 10 مليون دولار في القيمة السوقية" }
                    ]
                },
                testimonials: {
                    title: "ما يقوله عملاؤنا",
                    subtitle: "تعليقات حقيقية من أشخاص حقيقيين يثقون بنا في أمورهم القانونية",
                    reviews: [
                        { name: "سارة جونسون", role: "الرئيس التنفيذي، TechCorp", text: "قدمت JUSTYTA استشارة قانونية استثنائية أثناء توسعنا. مهنية وموجهة نحو النتائج." },
                        { name: "أحمد الراشد", role: "صاحب عمل", text: "خدمة متميزة باللغتين العربية والإنجليزية. لقد فهموا احتياجاتنا الثقافية بشكل مثالي." },
                        { name: "ماريا جارسيا", role: "رائدة أعمال", text: "من مراجعة العقود إلى دعم التقاضي، كانوا شريكنا القانوني الموثوق." }
                    ]
                },
                about: {
                    title: "حول JUSTYTA",
                    subtitle: "شريكك القانوني الموثوق مع عقود من الخبرة",
                    description: "تأسست على مبادئ العدالة والنزاهة والتميز، JUSTYTA تخدم العملاء عبر احتياجات قانونية متنوعة لأكثر من 15 عامًا. فريقنا متعدد اللغات يجمع بين الخبرة القانونية العميقة والفهم الثقافي.",
                    values: [
                        { title: "النزاهة", description: "نحافظ على أعلى المعايير الأخلاقية في جميع ممارساتنا" },
                        { title: "التميز", description: "ملتزمون بتقديم حلول قانونية متفوقة" },
                        { title: "إمكانية الوصول", description: "الخدمات القانونية متاحة بعدة لغات" }
                    ]
                },
                faq: {
                    title: "الأسئلة الشائعة",
                    subtitle: "ابحث عن إجابات للأسئلة الشائعة حول خدماتنا القانونية",
                    items: [
                        { question: "ما أنواع الخدمات القانونية التي تقدمونها؟", answer: "نقدم خدمات قانونية شاملة تشمل قانون الشركات والإصابات الشخصية وقانون الأسرة ونزاعات العقود وحماية الملكية الفكرية." },
                        { question: "هل تقدمون استشارات باللغة العربية؟", answer: "نعم، نقدم خدمات قانونية كاملة باللغتين الإنجليزية والعربية مع محامين ناطقين أصليين." },
                        { question: "كم تكلف خدماتكم؟", answer: "تختلف رسومنا حسب تعقيد القضية. نقدم تسعيرًا شفافًا واستشارات أولية مجانية." },
                        { question: "كم سرعة الحصول على المساعدة القانونية؟", answer: "نقدم استشارات في نفس اليوم للأمور العاجلة ونرد عادة خلال 24 ساعة لجميع الاستفسارات." }
                    ]
                },
                cta: {
                    title: "هل أنت مستعد للبدء؟",
                    subtitle: "اتصل بنا اليوم للحصول على استشارتك القانونية المجانية",
                    button: "احصل على استشارة مجانية",
                    phone: "+1 (555) 123-4567",
                    email: "info@justyta.com"
                },
                footer: {
                    description: "شريكك الموثوق في الأمور القانونية. التميز والنزاهة والنتائج.",
                    services_title: "الخدمات القانونية",
                    services: ["قانون الشركات", "الإصابات الشخصية", "قانون الأسرة", "نزاعات العقود"],
                    contact_title: "معلومات الاتصال",
                    contact: {
                        address: "123 ساحة القانون، وسط المدينة",
                        phone: "+1 (555) 123-4567",
                        email: "info@justyta.com"
                    },
                    links_title: "روابط سريعة",
                    links: ["معلومات عنا", "الخدمات", "اتصل بنا", "سياسة الخصوصية"],
                    copyright: "© 2025 JUSTYTA. جميع الحقوق محفوظة."
                }
            }
        };
        
        // Global Alpine data
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
                }
            }));
        });
    </script>
    
    <style>
        body {
            font-family: 'Instrument Sans', ui-sans-serif, system-ui, sans-serif;
        }
        
        h1, h2, h3, h4, h5, h6 {
            color: #421111;
        }
        
        .font-decorative {
            font-family: 'Cinzel Decorative', cursive;
        }

        /* Smooth scrolling */
        html {
            scroll-behavior: smooth;
        }

        /* Custom animations */
        @keyframes fadeInUp {
            from {
                opacity: 0;
                transform: translateY(30px);
            }
            to {
                opacity: 1;
                transform: translateY(0);
            }
        }

        .animate-fade-in-up {
            animation: fadeInUp 0.8s ease-out;
        }
    </style>
</head>

<body class="bg-brand-white text-brand-maroon font-sans leading-normal tracking-normal relative" x-data="app()">

    <!-- Language Switcher -->
    <div class="fixed top-4 right-4 z-50">
        <div class="bg-white/90 backdrop-blur-sm rounded-lg shadow-lg border border-brand-gold/20 p-2">
            <div class="flex gap-2">
                <button 
                    @click="switchLang('en')"
                    class="px-3 py-1 rounded text-sm font-medium transition-all duration-200"
                    :class="currentLang === 'en' ? 'bg-brand-gold text-white' : 'text-brand-maroon hover:bg-brand-cream'">
                    EN
                </button>
                <button 
                    @click="switchLang('ar')"
                    class="px-3 py-1 rounded text-sm font-medium transition-all duration-200"
                    :class="currentLang === 'ar' ? 'bg-brand-gold text-white' : 'text-brand-maroon hover:bg-brand-cream'">
                    العربية
                </button>
            </div>
        </div>
    </div>

    <!-- Navigation -->
    <nav class="fixed top-0 left-0 right-0 z-40 bg-brand-cream/90 backdrop-blur-lg border-b border-brand-gold/30">
        <div class="container mx-auto px-4">
            <div class="flex justify-between items-center py-4">
                <!-- Logo -->
                <div class="flex items-center space-x-3">
                    <img src="assets/images/JUSTYTA Logo transparent.png" alt="JUSTYTA" class="h-8 w-auto">
                    <span class="text-xl font-bold text-brand-maroon font-decorative">JUSTYTA</span>
                </div>

                <!-- Desktop Menu -->
                
                <!-- Mobile Menu Button -->
                <button @click="toggleMobileMenu()" class="md:hidden text-brand-maroon">
                    <i class="fas fa-bars text-xl"></i>
                </button>
            </div>

            <!-- Mobile Menu -->
            
            </div>
        </div>
    </nav>

    <!-- Header/Hero Section -->
    <header id="hero" class="bg-brand-cream/70 backdrop-blur-lg border-b border-brand-gold/30 pt-20">
        <div class="container mx-auto px-4 py-20">
            <!-- Logo Row -->
            <div class="flex justify-center items-center mb-8">
                <a href="/" class="flex items-center space-x-3">
                    <img src="assets/images/JUSTYTA Logo transparent.png" alt="justyta" class="h-14 w-auto">
                    <span class="text-3xl md:text-4xl font-bold text-brand-maroon font-decorative">
                        JUSTYTA
                    </span>
                </a>
            </div>

            <!-- Hero Content -->
            <div class="text-center animate-fade-in-up">
                <h1 class="text-5xl md:text-6xl font-bold
                           bg-gradient-to-r from-brand-green via-brand-teal to-brand-lime
                           bg-clip-text text-transparent
                           font-decorative tracking-wide leading-tight mb-6"
                    x-html="__('hero.heading')">
                </h1>

                <div class="mt-6 space-y-4 max-w-3xl mx-auto
                            text-xl md:text-2xl font-medium text-brand-charcoal/90">
                    <p x-html="__('hero.sub1')"></p>
                    <p x-html="__('hero.sub2')"></p>
                    <p x-html="__('hero.sub3')"></p>
                </div>

                <!-- CTA Button -->
                <div class="mt-12">
                    <a href="#contact" 
                       class="inline-flex items-center px-8 py-4 bg-brand-gold text-white font-semibold rounded-lg 
                              hover:bg-brand-maroon transition-all duration-300 transform hover:scale-105 shadow-lg">
                        <span x-text="__('hero.book_now')"></span>
                        <i class="fas fa-arrow-right ml-2"></i>
                    </a>
                </div>

                <!-- YouTube Video Section -->
                <div class="mt-16">
                    <div class="max-w-4xl mx-auto">
                        <h3 class="text-2xl md:text-3xl font-bold text-center mb-8 text-brand-maroon"
                            x-text="__('hero.video_title')">
                        </h3>
                        <div class="relative aspect-video bg-brand-cream/50 rounded-2xl overflow-hidden shadow-2xl">
                            <iframe 
                                class="w-full h-full"
                                src="https://www.youtube.com/embed/dQw4w9WgXcQ" 
                                title="JUSTYTA Legal Services Introduction"
                                frameborder="0" 
                                allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture; web-share" 
                                allowfullscreen>
                            </iframe>
                        </div>
                        <!-- Second Book Now Button -->
                        <div class="text-center mt-8">
                            <a href="#contact" 
                               class="inline-flex items-center px-8 py-4 bg-brand-green text-white font-semibold rounded-lg 
                                      hover:bg-brand-teal transition-all duration-300 transform hover:scale-105 shadow-lg">
                                <span x-text="__('hero.book_now')"></span>
                                <i class="fas fa-calendar-check ml-2"></i>
                            </a>
                        </div>
                    </div>
                </div>
            </div>
        </div>
    </header>

    <!-- Problem Section -->
    <section id="problem" class="bg-brand-cream/50 py-24">
        <div class="container mx-auto px-4">
            <!-- Heading -->
            <h2 class="text-4xl md:text-5xl font-bold text-center
                       bg-gradient-to-r from-brand-green via-brand-teal to-brand-lime
                       bg-clip-text text-transparent mb-4"
                x-text="__('problem.title')">
            </h2>
            <p class="text-xl text-center mb-14 max-w-2xl mx-auto text-brand-charcoal/80"
               x-text="__('problem.subtitle')">
            </p>

            <!-- 4-Column Grid -->
            <div class="grid grid-cols-1 sm:grid-cols-2 md:grid-cols-4 gap-6">
                <template x-for="(card, index) in __('problem.cards')" :key="index">
                    <div class="group flex flex-col items-center text-center
                               bg-white/70 backdrop-blur-md border border-brand-gold/30
                               rounded-3xl p-6 shadow-xl hover:shadow-brand-gold/30
                               transition-all duration-300 transform hover:-translate-y-2">
                        
                        <div class="mb-4 p-3 rounded-full bg-gradient-to-br from-brand-lime/20 to-brand-teal/20">
                            <i class="fas fa-chart-line text-2xl text-brand-green"></i>
                        </div>

                        <h3 class="text-lg font-bold mb-2 text-brand-maroon" x-text="card.title"></h3>
                        <p class="text-sm text-brand-charcoal/80 leading-relaxed" x-text="card.text"></p>
                    </div>
                </template>
            </div>
        </div>
    </section>

    <!-- Services Section with Animated Stats -->
    <section id="services" class="bg-brand-cream/50 py-24">
        <div class="container mx-auto px-4 max-w-6xl">
            
            <!-- Two-column layout -->
            <div class="grid grid-cols-1 lg:grid-cols-5 gap-10 items-center">

                <!-- LEFT (60%) -->
                <div class="lg:col-span-3 space-y-6">

                    <!-- Badge -->
                    <span class="inline-block text-base md:text-lg font-bold tracking-widest uppercase
                                 bg-gradient-to-r from-brand-green to-brand-teal
                                 bg-clip-text text-transparent"
                          x-text="__('services.badge')">
                    </span>
                    
                    <!-- Heading -->
                    <h2 class="text-4xl md:text-5xl font-bold leading-[1.3]
                               bg-gradient-to-r from-brand-maroon to-brand-charcoal
                               bg-clip-text text-transparent"
                        x-html="__('services.heading').replace(/\\n/g, '<br>')">
                    </h2>

                    <!-- Description -->
                    <p class="text-lg text-brand-charcoal/80 leading-relaxed"
                       x-text="__('services.description')">
                    </p>

                    <!-- Animated Statistics -->
                    <div class="grid grid-cols-2 md:grid-cols-4 gap-6 pt-4">
                        <!-- Satisfaction Stat -->
                        <div class="text-center"
                             x-data="{ 
                                 shown: false, 
                                 count: 0,
                                 target: 100,
                                 suffix: '%',
                                 startCounting() {
                                     if (this.shown) return;
                                     this.shown = true;
                                     let duration = 2500;
                                     let startTime = null;
                                     let step = (timestamp) => {
                                         if (!startTime) startTime = timestamp;
                                         let progress = Math.min((timestamp - startTime) / duration, 1);
                                         this.count = Math.floor(progress * this.target);
                                         if (progress < 1) {
                                             requestAnimationFrame(step);
                                         } else {
                                             this.count = this.target;
                                         }
                                     };
                                     requestAnimationFrame(step);
                                 }
                             }"
                             x-init="
                                 let observer = new IntersectionObserver((entries) => {
                                     entries.forEach(entry => {
                                         if (entry.isIntersecting) {
                                             startCounting();
                                         }
                                     });
                                 });
                                 observer.observe($el);
                             ">
                            <div class="text-3xl font-bold text-brand-green" x-text="count + suffix"></div>
                            <div class="text-sm text-brand-charcoal/70" x-text="__('services.stats.satisfaction.label')"></div>
                        </div>
                        
                        <!-- Cases Stat -->
                        <div class="text-center"
                             x-data="{ 
                                 shown: false, 
                                 count: 0,
                                 target: 350,
                                 suffix: '+',
                                 startCounting() {
                                     if (this.shown) return;
                                     this.shown = true;
                                     let duration = 2500;
                                     let startTime = null;
                                     let step = (timestamp) => {
                                         if (!startTime) startTime = timestamp;
                                         let progress = Math.min((timestamp - startTime) / duration, 1);
                                         this.count = Math.floor(progress * this.target);
                                         if (progress < 1) {
                                             requestAnimationFrame(step);
                                         } else {
                                             this.count = this.target;
                                         }
                                     };
                                     requestAnimationFrame(step);
                                 }
                             }"
                             x-init="
                                 let observer = new IntersectionObserver((entries) => {
                                     entries.forEach(entry => {
                                         if (entry.isIntersecting) {
                                             startCounting();
                                         }
                                     });
                                 });
                                 observer.observe($el);
                             ">
                            <div class="text-3xl font-bold text-brand-green" x-text="count + suffix"></div>
                            <div class="text-sm text-brand-charcoal/70" x-text="__('services.stats.cases.label')"></div>
                        </div>
                        
                        <!-- Advice Stat -->
                        <div class="text-center"
                             x-data="{ 
                                 shown: false, 
                                 count: 0,
                                 target: 500,
                                 suffix: '+',
                                 startCounting() {
                                     if (this.shown) return;
                                     this.shown = true;
                                     let duration = 2500;
                                     let startTime = null;
                                     let step = (timestamp) => {
                                         if (!startTime) startTime = timestamp;
                                         let progress = Math.min((timestamp - startTime) / duration, 1);
                                         this.count = Math.floor(progress * this.target);
                                         if (progress < 1) {
                                             requestAnimationFrame(step);
                                         } else {
                                             this.count = this.target;
                                         }
                                     };
                                     requestAnimationFrame(step);
                                 }
                             }"
                             x-init="
                                 let observer = new IntersectionObserver((entries) => {
                                     entries.forEach(entry => {
                                         if (entry.isIntersecting) {
                                             startCounting();
                                         }
                                     });
                                 });
                                 observer.observe($el);
                             ">
                            <div class="text-3xl font-bold text-brand-green" x-text="count + suffix"></div>
                            <div class="text-sm text-brand-charcoal/70" x-text="__('services.stats.advice.label')"></div>
                        </div>
                        
                        <!-- Branches Stat -->
                        <div class="text-center"
                             x-data="{ 
                                 shown: false, 
                                 count: 0,
                                 target: 250,
                                 suffix: '+',
                                 startCounting() {
                                     if (this.shown) return;
                                     this.shown = true;
                                     let duration = 2500;
                                     let startTime = null;
                                     let step = (timestamp) => {
                                         if (!startTime) startTime = timestamp;
                                         let progress = Math.min((timestamp - startTime) / duration, 1);
                                         this.count = Math.floor(progress * this.target);
                                         if (progress < 1) {
                                             requestAnimationFrame(step);
                                         } else {
                                             this.count = this.target;
                                         }
                                     };
                                     requestAnimationFrame(step);
                                 }
                             }"
                             x-init="
                                 let observer = new IntersectionObserver((entries) => {
                                     entries.forEach(entry => {
                                         if (entry.isIntersecting) {
                                             startCounting();
                                         }
                                     });
                                 });
                                 observer.observe($el);
                             ">
                            <div class="text-3xl font-bold text-brand-green" x-text="count + suffix"></div>
                            <div class="text-sm text-brand-charcoal/70" x-text="__('services.stats.branches.label')"></div>
                        </div>
                    </div>

                    <!-- Third Book Now Button -->
                    <div class="mt-8">
                        <a href="#contact" 
                           class="inline-flex items-center px-6 py-3 bg-brand-maroon text-white font-semibold rounded-lg 
                                  hover:bg-brand-charcoal transition-all duration-300 transform hover:scale-105 shadow-lg">
                            <span x-text="__('hero.book_now')"></span>
                            <i class="fas fa-phone ml-2"></i>
                        </a>
                    </div>
                </div>

                <!-- RIGHT (40%) -->
                <div class="lg:col-span-2 flex justify-center">
                    <img src="assets/images/lady-justice-statue.png"
                         alt="Lady Justice Statue"
                         class="w-full max-w-xs md:max-w-sm rounded-2xl shadow-2xl">
                </div>
            </div>
        </div>
    </section>

    <!-- About Section -->
    <section id="about" class="bg-white py-24">
        <div class="container mx-auto px-4">
            <div class="max-w-4xl mx-auto text-center">
                <h2 class="text-4xl md:text-5xl font-bold mb-6 
                           bg-gradient-to-r from-brand-maroon to-brand-charcoal
                           bg-clip-text text-transparent"
                    x-text="__('about.title')">
                </h2>
                <p class="text-xl text-brand-charcoal/80 mb-8" x-text="__('about.subtitle')"></p>
                <p class="text-lg text-brand-charcoal/70 leading-relaxed mb-12" x-text="__('about.description')"></p>

                <!-- Values Grid -->
                <div class="grid grid-cols-1 md:grid-cols-3 gap-8">
                    <template x-for="(value, index) in __('about.values')" :key="index">
                        <div class="bg-brand-cream/50 rounded-xl p-6 hover:shadow-lg transition-shadow">
                            <div class="w-16 h-16 mx-auto mb-4 bg-brand-gold/20 rounded-full flex items-center justify-center">
                                <i class="fas fa-star text-brand-gold text-2xl"></i>
                            </div>
                            <h3 class="text-xl font-semibold mb-3 text-brand-maroon" x-text="value.title"></h3>
                            <p class="text-brand-charcoal/70" x-text="value.description"></p>
                        </div>
                    </template>
                </div>
            </div>
        </div>
    </section>

    <!-- Portfolio Section -->
    <section id="portfolio" class="bg-brand-cream/30 py-24">
        <div class="container mx-auto px-4">
            <div class="max-w-6xl mx-auto">
                <div class="text-center mb-16">
                    <h2 class="text-4xl md:text-5xl font-bold mb-6 
                               bg-gradient-to-r from-brand-green to-brand-teal
                               bg-clip-text text-transparent"
                        x-text="__('portfolio.title')">
                    </h2>
                    <p class="text-xl text-brand-charcoal/80" x-text="__('portfolio.subtitle')"></p>
                </div>

                <!-- Portfolio Grid -->
                <div class="grid grid-cols-1 md:grid-cols-3 gap-8">
                    <template x-for="(case_item, index) in __('portfolio.cases')" :key="index">
                        <div class="bg-white rounded-xl overflow-hidden shadow-lg hover:shadow-xl transition-shadow">
                            <div class="h-48 bg-gradient-to-br from-brand-green/20 to-brand-teal/20 flex items-center justify-center">
                                <i class="fas fa-gavel text-4xl text-brand-green"></i>
                            </div>
                            <div class="p-6">
                                <h3 class="text-xl font-semibold mb-3 text-brand-maroon" x-text="case_item.title"></h3>
                                <p class="text-brand-charcoal/70" x-text="case_item.description"></p>
                            </div>
                        </div>
                    </template>
                </div>
            </div>
        </div>
    </section>

    <!-- Testimonials Section -->
    <section id="testimonials" class="bg-white py-24">
        <div class="container mx-auto px-4">
            <div class="max-w-6xl mx-auto">
                <div class="text-center mb-16">
                    <h2 class="text-4xl md:text-5xl font-bold mb-6 
                               bg-gradient-to-r from-brand-maroon to-brand-charcoal
                               bg-clip-text text-transparent"
                        x-text="__('testimonials.title')">
                    </h2>
                    <p class="text-xl text-brand-charcoal/80" x-text="__('testimonials.subtitle')"></p>
                </div>

                <!-- Testimonials Grid -->
                <div class="grid grid-cols-1 md:grid-cols-3 gap-8">
                    <template x-for="(review, index) in __('testimonials.reviews')" :key="index">
                        <div class="bg-brand-cream/50 rounded-xl p-6 relative">
                            <div class="absolute top-4 left-4 text-brand-gold text-3xl">
                                <i class="fas fa-quote-left"></i>
                            </div>
                            <div class="pt-8">
                                <p class="text-brand-charcoal/80 mb-6 italic" x-text="review.text"></p>
                                <div class="border-t border-brand-gold/30 pt-4">
                                    <h4 class="font-semibold text-brand-maroon" x-text="review.name"></h4>
                                    <p class="text-sm text-brand-charcoal/70" x-text="review.role"></p>
                                </div>
                            </div>
                        </div>
                    </template>
                </div>
            </div>
        </div>
    </section>

    <!-- FAQ Section -->
    <section id="faq" class="bg-brand-cream/30 py-24">
        <div class="container mx-auto px-4">
            <div class="max-w-4xl mx-auto">
                <div class="text-center mb-16">
                    <h2 class="text-4xl md:text-5xl font-bold mb-6 
                               bg-gradient-to-r from-brand-green to-brand-teal
                               bg-clip-text text-transparent"
                        x-text="__('faq.title')">
                    </h2>
                    <p class="text-xl text-brand-charcoal/80" x-text="__('faq.subtitle')"></p>
                </div>

                <!-- FAQ Items -->
                <div class="space-y-4">
                    <template x-for="(item, index) in __('faq.items')" :key="index">
                        <div class="bg-white rounded-xl shadow-lg overflow-hidden">
                            <button @click="toggleFaq(index)" 
                                    class="w-full px-6 py-4 text-left flex justify-between items-center hover:bg-brand-cream/30 transition-colors">
                                <span class="font-semibold text-brand-maroon" x-text="item.question"></span>
                                <i class="fas fa-chevron-down transition-transform duration-200"
                                   :class="{ 'rotate-180': openFaq === index }"></i>
                            </button>
                            <div x-show="openFaq === index" x-transition class="px-6 pb-4">
                                <p class="text-brand-charcoal/80" x-text="item.answer"></p>
                            </div>
                        </div>
                    </template>
                </div>
            </div>
        </div>
    </section>

    <!-- CTA Section -->
    <section id="contact" class="bg-gradient-to-r from-brand-maroon to-brand-charcoal py-24">
        <div class="container mx-auto px-4">
            <div class="max-w-4xl mx-auto text-center text-white">
                <h2 class="text-4xl md:text-5xl font-bold mb-6" x-text="__('cta.title')"></h2>
                <p class="text-xl mb-8 opacity-90" x-text="__('cta.subtitle')"></p>
                
                <div class="flex flex-col md:flex-row gap-6 justify-center items-center mb-8">
                    <a href="tel:+15551234567" class="flex items-center text-lg hover:text-brand-gold transition-colors">
                        <i class="fas fa-phone mr-3"></i>
                        <span x-text="__('cta.phone')"></span>
                    </a>
                    <a href="mailto:info@justyta.com" class="flex items-center text-lg hover:text-brand-gold transition-colors">
                        <i class="fas fa-envelope mr-3"></i>
                        <span x-text="__('cta.email')"></span>
                    </a>
                </div>

                <button class="inline-flex items-center px-8 py-4 bg-brand-gold text-brand-maroon font-semibold rounded-lg 
                              hover:bg-brand-lime transition-all duration-300 transform hover:scale-105 shadow-lg">
                    <span x-text="__('cta.button')"></span>
                    <i class="fas fa-calendar-check ml-2"></i>
                </button>
            </div>
        </div>
    </section>

    <!-- Footer -->
    <footer class="bg-brand-charcoal text-brand-white py-12">
        <div class="container mx-auto px-4">
            <div class="grid grid-cols-1 md:grid-cols-4 gap-8">
                <!-- Company Info -->
                <div class="md:col-span-2">
                    <div class="flex items-center space-x-3 mb-4">
                        <img src="assets/images/JUSTYTA Logo transparent.png" alt="JUSTYTA" class="h-10 w-auto">
                        <span class="text-2xl font-bold font-decorative">JUSTYTA</span>
                    </div>
                    <p class="text-brand-white/80 mb-4" x-text="__('footer.description')"></p>
                    <div class="flex space-x-4">
                        <a href="#" class="text-brand-white/80 hover:text-brand-gold transition-colors">
                            <i class="fab fa-facebook text-xl"></i>
                        </a>
                        <a href="#" class="text-brand-white/80 hover:text-brand-gold transition-colors">
                            <i class="fab fa-twitter text-xl"></i>
                        </a>
                        <a href="#" class="text-brand-white/80 hover:text-brand-gold transition-colors">
                            <i class="fab fa-linkedin text-xl"></i>
                        </a>
                        <a href="#" class="text-brand-white/80 hover:text-brand-gold transition-colors">
                            <i class="fab fa-instagram text-xl"></i>
                        </a>
                    </div>
                </div>
                
                <!-- Services -->
                <div>
                    <h4 class="text-lg font-semibold mb-4" x-text="__('footer.services_title')"></h4>
                    <ul class="space-y-2">
                        <template x-for="service in __('footer.services')" :key="service">
                            <li>
                                <a href="#" class="text-brand-white/80 hover:text-brand-gold transition-colors" x-text="service"></a>
                            </li>
                        </template>
                    </ul>
                </div>
                
                <!-- Contact -->
                <div>
                    <h4 class="text-lg font-semibold mb-4" x-text="__('footer.contact_title')"></h4>
                    <div class="space-y-2 text-brand-white/80">
                        <p x-text="__('footer.contact.address')"></p>
                        <p x-text="__('footer.contact.phone')"></p>
                        <p x-text="__('footer.contact.email')"></p>
                    </div>
                </div>
            </div>
            
            <div class="border-t border-brand-white/20 mt-8 pt-8 text-center">
                <p class="text-brand-white/60" x-text="__('footer.copyright')"></p>
            </div>
        </div>
    </footer>

</body>
</html>
