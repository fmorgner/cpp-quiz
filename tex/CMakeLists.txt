include(UseLATEX)
add_latex_document(slides.tex
                   INPUTS intro.tex
                          about.tex
                          struct.tex
                          cast.tex
                          const.tex
                          flow.tex
                          lambda.tex
                          order.tex
                          init.tex
                          funky.tex
                          call.tex
                   IMAGE_DIRS images)
