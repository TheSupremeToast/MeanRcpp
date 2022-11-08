library(devtools)

package.skeleton("mypackage")

my.Rpackage <- as.package("mypackage")
load_all(my.Rpackage)
document(my.Rpackage)
