include(UseLATEX)
add_latex_document(slides.tex
                   INPUTS intro.tex
                          about.tex
                          struct.tex
                   IMAGE_DIRS images)
