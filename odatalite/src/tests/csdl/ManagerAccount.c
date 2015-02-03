/*
**==============================================================================
**
** ODatatLite ver. 0.0.3
**
** Copyright (c) Microsoft Corporation
**
** All rights reserved. 
**
** MIT License
**
** Permission is hereby granted, free of charge, to any person obtaining a copy ** of this software and associated documentation files (the ""Software""), to 
** deal in the Software without restriction, including without limitation the 
** rights to use, copy, modify, merge, publish, distribute, sublicense, and/or 
** sell copies of the Software, and to permit persons to whom the Software is 
** furnished to do so, subject to the following conditions: The above copyright ** notice and this permission notice shall be included in all copies or 
** substantial portions of the Software.
**
** THE SOFTWARE IS PROVIDED *AS IS*, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR 
** IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, 
** FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE 
** AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER 
** LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
** OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN 
** THE SOFTWARE.
**
**==============================================================================
*/
#include <odata/odata.h>

static const EDMX_Include _0_0_Include =
{
    "Org.OData.Core.V1", /* Include.Namespace */
    "OData" /* Include.Alias */
};

static const EDMX_Include* _0_IncludesArray[] =
{
    &_0_0_Include
};

static const EDMX_Reference _0_Reference =
{
    "http://docs.oasis-open.org/odata/odata/v4.0/cs01/vocabularies/Org.OData.Core.V1.xml", /* Uri */
    _0_IncludesArray, /* Includes */
    OL_ARRAYSIZE(_0_IncludesArray), /* NumIncludes */
    NULL, /* NumIncludeAnnotations */
    0 /* NumIncludeAnnotations */
};

static const EDMX_Include _1_0_Include =
{
    "DMTFExtensions.0.9.2", /* Include.Namespace */
    "DMTF" /* Include.Alias */
};

static const EDMX_Include* _1_IncludesArray[] =
{
    &_1_0_Include
};

static const EDMX_Reference _1_Reference =
{
    "http://dmtf.org/schema/v1/DMTFExtensions", /* Uri */
    _1_IncludesArray, /* Includes */
    OL_ARRAYSIZE(_1_IncludesArray), /* NumIncludes */
    NULL, /* NumIncludeAnnotations */
    0 /* NumIncludeAnnotations */
};

static const EDMX_Include _2_0_Include =
{
    "Resource.0.9.2", /* Include.Namespace */
    "Resource" /* Include.Alias */
};

static const EDMX_Include* _2_IncludesArray[] =
{
    &_2_0_Include
};

static const EDMX_Reference _2_Reference =
{
    "http://dmtf.org/schema/v1/Resource", /* Uri */
    _2_IncludesArray, /* Includes */
    OL_ARRAYSIZE(_2_IncludesArray), /* NumIncludes */
    NULL, /* NumIncludeAnnotations */
    0 /* NumIncludeAnnotations */
};

static const EDM_Property _ManagerAccount_ManagerAccount_Password =
{
    1, /* Nullable */
    0, /* Extended */
    "Password", /* Name */
    "Edm.String" /* Type */
};

static const EDM_Property _ManagerAccount_ManagerAccount_UserName =
{
    0, /* Nullable */
    0, /* Extended */
    "UserName", /* Name */
    "Edm.String" /* Type */
};

static const EDM_Property _ManagerAccount_ManagerAccount_Links =
{
    0, /* Nullable */
    0, /* Extended */
    "Links", /* Name */
    "ManagerAccount.Links" /* Type */
};

static const EDM_Property* _ManagerAccount_ManagerAccount_PropertiesArray[] =
{
    (const EDM_Property*)&_ManagerAccount_ManagerAccount_Password,
    (const EDM_Property*)&_ManagerAccount_ManagerAccount_UserName,
    (const EDM_Property*)&_ManagerAccount_ManagerAccount_Links
};

static const EDM_EntityType _ManagerAccount_ManagerAccount =
{
    "ManagerAccount", /* Name */
    "Resource.Resource", /* BaseType */
    NULL, /* Abstract */
    NULL, /* OpenType */
    NULL, /* HasStream */
    NULL, /* Key */
    _ManagerAccount_ManagerAccount_PropertiesArray,
    OL_ARRAYSIZE(_ManagerAccount_ManagerAccount_PropertiesArray),
    NULL, /* NavigationProperties */
    0 /* NumNavigationProperties */
};

static const EDM_Property _ManagerAccount_Links_Oem =
{
    1, /* Nullable */
    0, /* Extended */
    "Oem", /* Name */
    "Resource.Oem" /* Type */
};

static const EDM_Property* _ManagerAccount_Links_PropertiesArray[] =
{
    (const EDM_Property*)&_ManagerAccount_Links_Oem
};

static const EDM_ComplexType _ManagerAccount_Links =
{
    "Links", /* Name */
    NULL, /* BaseType */
    NULL, /* Abstract */
    NULL, /* OpenType */
    _ManagerAccount_Links_PropertiesArray,
    OL_ARRAYSIZE(_ManagerAccount_Links_PropertiesArray),
    NULL, /* NavigationProperties */
    0 /* NumNavigationProperties */
};

static const EDM_EntityType* _ManagerAccount_EntityTypesArray[] =
{
    (const EDM_EntityType*)&_ManagerAccount_ManagerAccount
};

static const EDM_ComplexType* _ManagerAccount_ComplexTypesArray[] =
{
    (const EDM_ComplexType*)&_ManagerAccount_Links
};

static const EDM_Schema _ManagerAccount_Schema =
{
    "ManagerAccount.0.9.2", /* Namespace */
    "ManagerAccount", /* Alias */
    _ManagerAccount_EntityTypesArray,
    OL_ARRAYSIZE(_ManagerAccount_EntityTypesArray),
    _ManagerAccount_ComplexTypesArray,
    OL_ARRAYSIZE(_ManagerAccount_ComplexTypesArray),
    NULL, /* EnumTypes */
    0, /* NumEnumTypes */
    NULL, /* Actions */
    0, /* NumActions */
    NULL, /* TypeDefinitions */
    0, /* NumTypeDefinitions */
    NULL, /* EntityContainers */
    0, /* NumEntityContainers */
    NULL, /* Terms */
    0 /* NumTerms */
};

static const EDM_Schema* _SchemasArray[] =
{
    &_ManagerAccount_Schema
};

static const EDMX_DataServices _DataServices =
{
    _SchemasArray, /* Schemas */
    OL_ARRAYSIZE(_SchemasArray) /* NumSchemas */
};

static const EDMX_Reference* _ReferencesArray[] =
{
    &_0_Reference,
    &_1_Reference,
    &_2_Reference
};

const EDMX_Edmx ManagerAccount_Edmx =
{
    _ReferencesArray, /* References */
    OL_ARRAYSIZE(_ReferencesArray), /* NumReferences */
    &_DataServices
};

