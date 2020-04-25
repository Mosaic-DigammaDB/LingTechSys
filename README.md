
# LingTechSys
## Preview 

This repository contains neither executable code nor 
data.  To see the latest developments for CR2 
(the Cross-Disciplinary Repository for Covid-19 Research) 
please refer to the Mosaic-`DigammaDB`/CRCR repository.

The purpose of this repository is to illustrate the 
structure of data sets generated with 
"Dataset Creator" and to outline several tools, 
developed by Linguistic Technology Systems, 
which are used in the curation of CR2.

Programmers or organizations who would like to 
use these tools for their own projects 
are invited to contact us for more information.

**`DigammaDB`**
-------------
`DigammaDB` is a `C++` Hypergraph Database Engine.   This 
engine is designed to employ a similar interface as 
found in existing graph/hypergraph databases or libraries, 
such as HyperGraphDB, WhiteDB, and HgLib (so that code and 
coding techniques applicable to these projects can be 
adapted for `DigammaDB`).  In the implemention used for 
CR2, `DigammaDB` employs WhiteDB for the raw data storage.

An important feature of `DigammaDB` is the Hypergraph 
Exchange Format (`HGXF`), which is used to serialize 
the information contained in `DigammaDB` databases.  
`HGXF` can also be employed as a general-purpose serialization 
format, especially for scientific data.

Complimenting `HGXF` is the Annotation Exchange Format 
(`AXF`) which can be used associate segments of documents 
(e.g., academic publications) with data elements 
(and/or concepts defined in a controled vocabulary).  
`HGXF` and `AXF` are designed to interoperate, in that 
`AXF` annotations can point to fragments of a 
data archive or database which are identified by `HGXF`.

`DigammaDB`, `HGXF`, and `AXF` are described in greater 
detail in a prospectus which can be downloaded 
from the CRCR repository. 

**Dataset Creator**
-------------------

Dataset Creator is a tool (available as a `Qt` Creator Plugin) 
for building institutional and/or research data sets.  
Dataset Creator can be used to generate open-access 
research objects that are linked to scientific 
publications.  It can also be used to build sample 
data sets which an organization may use internally 
for application prototyping, testing, schema-documentation, 
or other software engineering requirements. 

In the general case, Dataset Creator archives will have a 
layout similar to that demonstrated in the current 
repository.  Certain basic files are included by 
default in any archive, some of which are previewed 
here.  Dataset Creator is designed to use qmake as 
its default build system, and `C++` as the primary 
implementation language.

Typical Dataset Creator archives will also include 
LaTeX and `C++` code oriented to preparing research 
papers for publication.  This system employs a 
custom markup language to generate LaTeX files, 
and also provides machine-readable archives of 
publication texts using a new Hypergraph Text 
Encoding Protocol (`HTXN`).  `HTXN`, `HGXF`, and `AXF` 
work in consort to provide publication repositories 
tailored to Text and Data Mining (TDM) while also 
generating interactive PDF files for digital 
publication.  In particular, the `HTXN`/LaTeX 
generators also produce `HGXF` code containing 
positional and viewport data which is 
relevant both for annotations and for customizing 
PDF viewers to incorporate annotations and semantic 
data into user-interaction features (e.g., context menus).

Typical Dataset Creator archives will include a 
customized PDF viewer, distributed in source-code 
form, that can be adapted to individual research 
objects if needed.  For example, a specialized 
PDF viewer might include networking code to 
interoperate with domain-specific scientific 
applications to visualize research data 
discussed or analyzed in a particular manuscript.

**NA3**

`NA3`, or `NCN/A3R`, which stands for "Native 
Cloud-Native/Application-as-a-Resource", is a 
framework for hosting native applications via 
cloud services.  "Native application" in this 
context typically means `C++` desktop-style 
applications that can be distributed in source-code 
fashion.  The `A3R` (Application-as-a-Resource) 
model involves annotating application projects 
with information that permits the application 
overall to be treated as an integral digital 
resource, one which can be included in a 
larger ecosystem.  A canonical example of an 
application resource would be customized 
software implemented to access, manipulate, and 
visualize information published in a 
research data set.  Another potential 
`A3R` use-case would be hosting application code 
along with domain-specific data within a 
heterogeneous information space, such as a 
Semantic Data Lake.

One way to implement software conforming to 
the `A3R` model is to design applications to 
be instances of the "Digamma-application" protocol, 
which is analogous in the DigammaDB context to 
the HGApplication interface for HyperGraphDB.  
Using DigammaDB provides the data management 
and type-system logic which forms the backbone 
of the resource model encoded in `A3R`.  When 
added to an `NA3` archive or service, the 
`A3R` model represents information related 
to file types and data formats, library 
requirements, inter-application networking protocols, 
and other documentation helping researchers or 
developers to acquire and use the application.  
Via Digamma-application, much of this information 
can be obtained from the application database.

The Native Cloud/Native platform is a library for 
creating `Qt`-based cloud services, canonically 
`HTTP` 

