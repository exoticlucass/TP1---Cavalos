const bottom = document.querySelector('#switcher')
bottom.addEventListener('click', function(){
    const audio = document.querySelector('audio')
    audio.currentTime = 0.5
    audio.play()
})