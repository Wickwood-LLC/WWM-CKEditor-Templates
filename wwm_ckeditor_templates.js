/* Add custom CSS for the Editor */

CKEDITOR.plugins.add( 'example', {
    init: function( editor ) {
        if (typeof editor.config.contentsCss == 'object') {
            editor.config.contentsCss.push(CKEDITOR.getUrl(this.path + 'ckeditor_editor.css'));
        }

        else {
            editor.config.contentsCss = [editor.config.contentsCss, CKEDITOR.getUrl(this.path + 'ckeditor_editor.css')];
        }
    }
} );
