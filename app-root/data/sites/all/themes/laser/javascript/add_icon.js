(function($) { 
  $(document).ready(function() {
    linkhtml = $('#home-link').html();
    $('#home-link').html('<i class="icon-home"></i>' + linkhtml);
    linkhtml = $('#contact-link').html();
    $('#contact-link').html('<i class="icon-envelope"></i>' + linkhtml)
  });
})(jQuery);