$(function(){
    $('#primeiro').click(function(){
        $('h1').fadeOut();
    });

    $('#segundo').click(function(){
        $('h1').fadeIn();
        $('#Mensagem').text("mensagem aparecendo");
        $('#Mensagem').css('color', 'green');
        $('#Mensagem').css('border', '2px solid blue');
        $('#Mensagem').css('font-size', '34px');
    })
});