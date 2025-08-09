// Tailwind CSS Configuration
tailwind.config = {
    theme: {
        screens: {
            'sm': '480px',   // Mobile (small phones → large phones)
            'md': '768px',   // Tablets & small laptops
            'lg': '1024px',  // Laptops (13" and up)
            'xl': '1366px',  // Large laptops (15"+)
            '2xl': '1536px'  // Big monitors
        },
        extend: {
            colors: {
                'brand-white': '#FFFFFF',
                'brand-maroon': '#800020',
                'brand-gold': '#C4AF7E',
                'brand-cream': '#F5F5DC',
                'brand-charcoal': '#36454F',
                'brand-lime': '#90EE90',
                'brand-green': '#228B22'
            },
            fontFamily: {
                'decorative': ['Cinzel Decorative', 'serif'],
                'sans': ['Instrument Sans', 'sans-serif']
            }
        }
    }
}
