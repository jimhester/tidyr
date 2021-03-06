% Generated by roxygen2 (4.0.1): do not edit by hand
\name{separate_}
\alias{separate_}
\title{Standard-evaluation version of \code{separate}.}
\usage{
separate_(data, col, into, sep = "[^[:alnum:]]+", remove = TRUE,
  convert = FALSE, ...)
}
\arguments{
\item{data}{A data frame.}

\item{col}{Name of column to split, as string.}

\item{into}{Names of new variables to create as character vector.}

\item{sep}{Separator between columns.

  If character, is interpreted as a regular expression. The default
  value is a regular expression that matches any sequence of
  non-alphanumeric values.

  If numeric, interpreted as positions to split at. Positive values start
  at 1 at the far-left of the string; negative value start at -1 at the
  far-right of the string. The length of \code{sep} should be one less than
  \code{into}.}

\item{remove}{If \code{TRUE}, remove input column from output data frame.}

\item{convert}{If \code{TRUE}, will run \code{\link{type.convert}} with
\code{as.is = TRUE} on new columns. This is useful if the component
columns are integer, numeric or logical.}

\item{...}{Other arguments passed on to \code{\link{strsplit}} to control
how the regular expression is processed.}
}
\description{
This is a S3 generic.
}
\keyword{internal}

