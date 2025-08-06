// Statistics Counter Animation Component
function createStatCounter(target, suffix = '') {
    return {
        shown: false,
        count: 0,
        target: target,
        suffix: suffix,
        
        startCounting() {
            if (this.shown) return;
            this.shown = true;
            
            const duration = 2500;
            let startTime = null;
            
            const step = (timestamp) => {
                if (!startTime) startTime = timestamp;
                const progress = Math.min((timestamp - startTime) / duration, 1);
                this.count = Math.floor(progress * this.target);
                
                if (progress < 1) {
                    requestAnimationFrame(step);
                } else {
                    this.count = this.target;
                }
            };
            
            requestAnimationFrame(step);
        }
    };
}
