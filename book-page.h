<!DOCTYPE html>
<html lang="en" x-data="{ currentLang: 'en' }">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Book Appointment - JUSTYTA</title>
    
    <!-- Tailwind CSS -->
    <script src="https://cdn.tailwindcss.com"></script>
    
    <!-- Alpine.js -->
    <script defer src="https://unpkg.com/alpinejs@3.x.x/dist/cdn.min.js"></script>
    
    <!-- Google Fonts -->
    <link href="https://fonts.googleapis.com/css2?family=Cinzel+Decorative:wght@400;700&display=swap" rel="stylesheet">
    <link href="https://fonts.googleapis.com/css2?family=Instrument+Sans:wght@400;500;600;700&display=swap" rel="stylesheet">
    
    <!-- Font Awesome for icons -->
    <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/6.4.0/css/all.min.css">
    
    <!-- Custom Styles -->
    <link rel="stylesheet" href="css/styles.css">
    
    <!-- Configuration and Dependencies -->
    <script src="js/config.js"></script>
    <script src="js/translations.js"></script>
    <script src="js/components.js"></script>
</head>

<body class="bg-brand-white text-brand-maroon font-sans leading-normal tracking-normal relative" x-data="bookingApp()">

    <!-- Navigation -->
    <nav class="fixed top-0 left-0 right-0 z-40 bg-brand-gold/95 backdrop-blur-lg border-b border-brand-gold/30">
        <div class="container mx-auto px-4">
            <div class="flex justify-between items-center py-4" style="direction: ltr !important;">
                <!-- Logo -->
                <div class="flex items-center space-x-3" style="direction: ltr !important; margin-right: auto !important; margin-left: 0 !important; order: -1 !important;">
                    <img src="assets/images/JUSTYTA Logo transparent.png" alt="JUSTYTA" class="h-8 w-auto">
                    <span class="text-xl font-bold text-brand-maroon font-decorative">JUSTYTA</span>
                </div>
                
                <!-- Back to Home -->
                <a href="index.html" class="text-brand-maroon hover:text-brand-white transition-colors">
                    <i class="fas fa-arrow-left mr-2"></i>
                    Back to Home
                </a>
            </div>
        </div>
    </nav>

    <!-- Booking Section -->
    <section class="bg-brand-cream/30 py-24 pt-32">
        <div class="container mx-auto px-4">
            <div class="max-w-4xl mx-auto">
                
                <!-- Header -->
                <div class="text-center mb-12">
                    <h1 class="text-4xl md:text-5xl font-bold mb-6 gradient-text-primary font-decorative">
                        Book Your Legal Consultation
                    </h1>
                    <p class="text-xl text-brand-charcoal/80">
                        Schedule a consultation with our expert legal team
                    </p>
                </div>

                <!-- Booking Form -->
                <div class="grid grid-cols-1 lg:grid-cols-2 gap-12">
                    
                    <!-- Calendar Section -->
                    <div class="bg-white rounded-xl shadow-lg p-8">
                        <h3 class="text-2xl font-bold mb-6 text-brand-maroon">
                            <i class="fas fa-calendar-alt mr-3"></i>
                            Select Date & Time
                        </h3>
                        
                        <!-- Calendar -->
                        <div x-data="calendar()" class="mb-6">
                            <!-- Month Navigation -->
                            <div class="flex justify-between items-center mb-4">
                                <button @click="prevMonth()" class="p-2 text-brand-maroon hover:bg-brand-cream rounded-lg">
                                    <i class="fas fa-chevron-left"></i>
                                </button>
                                <h4 class="text-lg font-semibold" x-text="monthYear"></h4>
                                <button @click="nextMonth()" class="p-2 text-brand-maroon hover:bg-brand-cream rounded-lg">
                                    <i class="fas fa-chevron-right"></i>
                                </button>
                            </div>
                            
                            <!-- Calendar Grid -->
                            <div class="grid grid-cols-7 gap-1 mb-4">
                                <!-- Day Headers -->
                                <template x-for="day in ['Sun', 'Mon', 'Tue', 'Wed', 'Thu', 'Fri', 'Sat']">
                                    <div class="p-2 text-center text-sm font-medium text-brand-charcoal/60" x-text="day"></div>
                                </template>
                                
                                <!-- Calendar Days -->
                                <template x-for="(day, index) in calendarDays" :key="index">
                                    <button 
                                        @click="selectDate(day)"
                                        class="p-2 text-center text-sm rounded-lg transition-colors"
                                        :class="{
                                            'text-brand-charcoal/30': !day.isCurrentMonth,
                                            'bg-brand-gold text-white': day.isSelected,
                                            'bg-brand-cream text-brand-maroon hover:bg-brand-gold hover:text-white': day.isCurrentMonth && !day.isSelected,
                                            'cursor-not-allowed opacity-50': day.isPast
                                        }"
                                        :disabled="day.isPast"
                                        x-text="day.day">
                                    </button>
                                </template>
                            </div>
                        </div>

                        <!-- Time Slots -->
                        <div x-show="selectedDate" class="mt-6">
                            <h4 class="text-lg font-semibold mb-4 text-brand-maroon">Available Times</h4>
                            <div class="grid grid-cols-3 gap-2">
                                <template x-for="time in availableTimes">
                                    <button 
                                        @click="selectedTime = time"
                                        class="p-3 text-sm rounded-lg border transition-colors"
                                        :class="{
                                            'bg-brand-gold text-white border-brand-gold': selectedTime === time,
                                            'bg-white text-brand-maroon border-brand-cream hover:border-brand-gold': selectedTime !== time
                                        }"
                                        x-text="time">
                                    </button>
                                </template>
                            </div>
                        </div>
                    </div>

                    <!-- Contact Information Form -->
                    <div class="bg-white rounded-xl shadow-lg p-8">
                        <h3 class="text-2xl font-bold mb-6 text-brand-maroon">
                            <i class="fas fa-user mr-3"></i>
                            Your Information
                        </h3>
                        
                        <form @submit.prevent="submitBooking()" class="space-y-4">
                            <div>
                                <label class="block text-sm font-medium text-brand-maroon mb-2">Full Name *</label>
                                <input 
                                    type="text" 
                                    x-model="form.name"
                                    required
                                    class="w-full p-3 border border-brand-cream rounded-lg focus:border-brand-gold focus:outline-none">
                            </div>
                            
                            <div>
                                <label class="block text-sm font-medium text-brand-maroon mb-2">Email *</label>
                                <input 
                                    type="email" 
                                    x-model="form.email"
                                    required
                                    class="w-full p-3 border border-brand-cream rounded-lg focus:border-brand-gold focus:outline-none">
                            </div>
                            
                            <div>
                                <label class="block text-sm font-medium text-brand-maroon mb-2">Phone Number *</label>
                                <input 
                                    type="tel" 
                                    x-model="form.phone"
                                    required
                                    class="w-full p-3 border border-brand-cream rounded-lg focus:border-brand-gold focus:outline-none">
                            </div>
                            
                            <div>
                                <label class="block text-sm font-medium text-brand-maroon mb-2">Legal Service Type</label>
                                <select 
                                    x-model="form.serviceType"
                                    class="w-full p-3 border border-brand-cream rounded-lg focus:border-brand-gold focus:outline-none">
                                    <option value="">Select a service</option>
                                    <option value="consultation">General Consultation</option>
                                    <option value="corporate">Corporate Law</option>
                                    <option value="litigation">Litigation</option>
                                    <option value="contracts">Contract Review</option>
                                    <option value="other">Other</option>
                                </select>
                            </div>
                            
                            <div>
                                <label class="block text-sm font-medium text-brand-maroon mb-2">Brief Description</label>
                                <textarea 
                                    x-model="form.description"
                                    rows="4"
                                    class="w-full p-3 border border-brand-cream rounded-lg focus:border-brand-gold focus:outline-none"
                                    placeholder="Please describe your legal matter briefly..."></textarea>
                            </div>

                            <!-- Selected Appointment Summary -->
                            <div x-show="selectedDate && selectedTime" class="bg-brand-cream/50 p-4 rounded-lg">
                                <h4 class="font-semibold text-brand-maroon mb-2">Appointment Summary:</h4>
                                <p class="text-sm text-brand-charcoal">
                                    <i class="fas fa-calendar mr-2"></i>
                                    <span x-text="selectedDate"></span> at <span x-text="selectedTime"></span>
                                </p>
                            </div>

                            <!-- Submit Button -->
                            <button 
                                type="submit"
                                :disabled="!selectedDate || !selectedTime || !form.name || !form.email || !form.phone"
                                class="w-full bg-brand-gold text-brand-maroon font-semibold py-4 px-6 rounded-lg 
                                       hover:bg-brand-lime transition-all duration-300 transform hover:scale-105 shadow-lg
                                       disabled:opacity-50 disabled:cursor-not-allowed disabled:transform-none">
                                <i class="fas fa-calendar-check mr-2"></i>
                                Book Appointment
                            </button>
                        </form>
                    </div>
                </div>
            </div>
        </div>
    </section>

    <!-- Success Message -->
    <div x-show="showSuccess" 
         x-transition
         class="fixed inset-0 bg-black/50 flex items-center justify-center z-50">
        <div class="bg-white rounded-xl p-8 max-w-md mx-4 text-center">
            <div class="text-brand-green text-5xl mb-4">
                <i class="fas fa-check-circle"></i>
            </div>
            <h3 class="text-2xl font-bold text-brand-maroon mb-4">Booking Confirmed!</h3>
            <p class="text-brand-charcoal mb-6">
                Your appointment has been scheduled. We'll send you a confirmation email shortly.
            </p>
            <button 
                @click="showSuccess = false; window.location.href = 'index.html'"
                class="bg-brand-gold text-brand-maroon px-6 py-3 rounded-lg hover:bg-brand-lime transition-colors">
                Return to Home
            </button>
        </div>
    </div>

    <script>
        function bookingApp() {
            return {
                selectedDate: null,
                selectedTime: null,
                showSuccess: false,
                form: {
                    name: '',
                    email: '',
                    phone: '',
                    serviceType: '',
                    description: ''
                },
                availableTimes: [
                    '9:00 AM', '10:00 AM', '11:00 AM',
                    '2:00 PM', '3:00 PM', '4:00 PM'
                ],
                
                submitBooking() {
                    // Here you would typically send the booking data to your backend
                    console.log('Booking submitted:', {
                        date: this.selectedDate,
                        time: this.selectedTime,
                        ...this.form
                    });
                    
                    this.showSuccess = true;
                }
            }
        }

        function calendar() {
            return {
                currentDate: new Date(),
                selectedDate: null,
                
                get monthYear() {
                    return this.currentDate.toLocaleDateString('en-US', { 
                        month: 'long', 
                        year: 'numeric' 
                    });
                },
                
                get calendarDays() {
                    const year = this.currentDate.getFullYear();
                    const month = this.currentDate.getMonth();
                    
                    const firstDay = new Date(year, month, 1);
                    const lastDay = new Date(year, month + 1, 0);
                    const startDate = new Date(firstDay);
                    startDate.setDate(startDate.getDate() - firstDay.getDay());
                    
                    const days = [];
                    const today = new Date();
                    today.setHours(0, 0, 0, 0);
                    
                    for (let i = 0; i < 42; i++) {
                        const date = new Date(startDate);
                        date.setDate(startDate.getDate() + i);
                        
                        days.push({
                            day: date.getDate(),
                            date: date,
                            isCurrentMonth: date.getMonth() === month,
                            isSelected: this.selectedDate && date.toDateString() === this.selectedDate.toDateString(),
                            isPast: date < today
                        });
                    }
                    
                    return days;
                },
                
                prevMonth() {
                    this.currentDate.setMonth(this.currentDate.getMonth() - 1);
                    this.currentDate = new Date(this.currentDate);
                },
                
                nextMonth() {
                    this.currentDate.setMonth(this.currentDate.getMonth() + 1);
                    this.currentDate = new Date(this.currentDate);
                },
                
                selectDate(day) {
                    if (!day.isPast && day.isCurrentMonth) {
                        this.selectedDate = day.date;
                        this.$dispatch('date-selected', day.date);
                    }
                }
            }
        }
    </script>

</body>
</html>
