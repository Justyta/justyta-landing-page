# JUSTYTA Legal Services - Organized Project Structure

## 📁 Project Structure

```
justyta-html/
├── index.html                    # Original single-file version
├── index-organized.html          # New organized version
├── assets/
│   └── images/
│       ├── JUSTYTA Logo transparent.png
│       ├── lady-justice-statue.png
│       └── logo.png
├── css/
│   └── styles.css               # Custom styles and animations
├── js/
│   ├── config.js                # Tailwind configuration
│   ├── translations.js          # Multi-language content
│   ├── components.js            # Reusable components (stats counter)
│   └── app.js                   # Main Alpine.js application
├── components/                   # HTML component partials
│   ├── language-switcher.html
│   ├── navigation.html
│   ├── hero.html
│   └── footer.html
├── package.json
├── README.md                    # This file
└── run.sh
```

## 🚀 Getting Started

### Option 1: Use Organized Version (Recommended)
Open `index-organized.html` in your browser to see the modular version.

### Option 2: Use Original Version
Open `index.html` for the original single-file version.

## 📝 File Organization

### CSS (`css/styles.css`)
- Custom animations and transitions
- Brand-specific utility classes
- Component-specific styles
- Responsive design improvements
- Button styles (btn-primary, btn-secondary, btn-tertiary)
- Card components
- Video container styles

### JavaScript Files

#### `js/config.js`
- Tailwind CSS configuration
- Brand color definitions
- Font family settings

#### `js/translations.js`
- Complete English and Arabic translations
- Structured content organization
- Easy to add new languages

#### `js/components.js`
- Reusable Alpine.js components
- Statistics counter animation
- Intersection Observer utilities

#### `js/app.js`
- Main Alpine.js application
- Language switching functionality
- FAQ accordion logic
- Mobile menu handling
- Statistics initialization

### Components (`components/`)
Modular HTML components that can be included in pages:
- Language switcher
- Navigation bar
- Hero section
- Footer

## 🎨 Features

### ✅ Maintained Features
- 3 "Book Now" buttons throughout the page
- YouTube video section with introduction
- Bilingual support (English/Arabic)
- Responsive design
- Animated statistics counters
- FAQ accordion
- Professional styling

### ✅ Improvements
- **Modular Architecture**: Separated concerns into logical files
- **Maintainable CSS**: Organized styles with utility classes
- **Reusable Components**: Modular Alpine.js components
- **Better Performance**: Optimized file structure
- **Developer Experience**: Clear code organization
- **Easy Localization**: Centralized translation management

## 🛠️ Development

### Adding New Content
1. **Translations**: Add to `js/translations.js`
2. **Styles**: Add to `css/styles.css`
3. **Components**: Create new Alpine.js components in `js/components.js`
4. **Sections**: Add new sections to the main HTML file

### Button Styles
Three button styles are available:
- `.btn-primary` - Gold background (main CTA)
- `.btn-secondary` - Green background (secondary actions)
- `.btn-tertiary` - Maroon background (tertiary actions)

### Adding New Languages
1. Add new language object to `translations.js`
2. Update language switcher in the HTML
3. Add appropriate RTL/LTR handling if needed

## 📱 Responsive Design

The website is fully responsive with:
- Mobile-first approach
- Flexible grid systems
- Adaptive typography
- Touch-friendly interfaces
- Optimized images

## 🎯 Key Components

### Statistics Counter
Animated counters that start when scrolled into view:
- Customer Satisfaction: 100%
- Cases Solved: 350+
- Legal Advice Given: 500+
- Partner Offices: 250+

### Video Section
YouTube embed with:
- Responsive aspect ratio
- Custom styling
- Accessibility features

### FAQ Section
Accordion-style FAQ with:
- Smooth animations
- Keyboard navigation
- Accessible markup

## 🔧 Customization

### Colors
Brand colors are defined in `js/config.js` and can be customized:
- Primary: #421111 (Maroon)
- Secondary: #C4AF7E (Gold)
- Accent: #04502E (Green)
- Background: #F7F5F2 (Cream)

### Fonts
- Headers: Cinzel Decorative
- Body: Instrument Sans

## 📞 Contact Information

- Phone: +1 (555) 123-4567
- Email: info@justyta.com
- Address: 123 Legal Plaza, Downtown

## 📄 License

© 2025 JUSTYTA. All rights reserved.
