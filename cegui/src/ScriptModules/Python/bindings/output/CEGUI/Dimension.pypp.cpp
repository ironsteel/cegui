// This file has been generated by Py++.

#include "boost/python.hpp"
#include "python_CEGUI.h"
#include "Dimension.pypp.hpp"

namespace bp = boost::python;

void register_Dimension_class(){

    { //::CEGUI::Dimension
        typedef bp::class_< CEGUI::Dimension > Dimension_exposer_t;
        Dimension_exposer_t Dimension_exposer = Dimension_exposer_t( "Dimension", "*!\n\
        \n\
            Class representing some kind of dimension.\n\
        \n\
            The key thing to understand about Dimension is that it contains not just a\n\
            dimensional value, but also a record of what the dimension value is supposed\n\
            to represent. (e.g. a co-ordinate on the x axis, or the height of something).\n\
        *\n", bp::init< >() );
        bp::scope Dimension_scope( Dimension_exposer );
        Dimension_exposer.def( bp::init< CEGUI::Dimension const & >(( bp::arg("other") )) );
        Dimension_exposer.def( bp::init< CEGUI::BaseDim const &, CEGUI::DimensionType >(( bp::arg("dim"), bp::arg("type") ), "*!\n\
            \n\
                Constructor\n\
        \n\
            @param dim\n\
                object based on subclass of BaseDim which holds the dimensional value.\n\
        \n\
            @param type\n\
                DimensionType value indicating what dimension this object is to represent.\n\
            *\n") );
        { //::CEGUI::Dimension::getBaseDimension
        
            typedef ::CEGUI::BaseDim const & ( ::CEGUI::Dimension::*getBaseDimension_function_type )(  ) const;
            
            Dimension_exposer.def( 
                "getBaseDimension"
                , getBaseDimension_function_type( &::CEGUI::Dimension::getBaseDimension )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "*!\n\
                \n\
                    return the BaseDim object currently used as the value for this Dimension.\n\
            \n\
                @return\n\
                    const reference to the BaseDim sub-class object which contains the value\n\
                    for this Dimension.\n\
                *\n" );
        
        }
        { //::CEGUI::Dimension::getDimensionType
        
            typedef ::CEGUI::DimensionType ( ::CEGUI::Dimension::*getDimensionType_function_type )(  ) const;
            
            Dimension_exposer.def( 
                "getDimensionType"
                , getDimensionType_function_type( &::CEGUI::Dimension::getDimensionType )
                , "*!\n\
                \n\
                    Return a DimensionType value indicating what this Dimension represents.\n\
            \n\
                @return\n\
                    one of the DimensionType enumerated values.\n\
                *\n" );
        
        }
        { //::CEGUI::Dimension::handleFontRenderSizeChange
        
            typedef bool ( ::CEGUI::Dimension::*handleFontRenderSizeChange_function_type )( ::CEGUI::Window &,::CEGUI::Font const * ) const;
            
            Dimension_exposer.def( 
                "handleFontRenderSizeChange"
                , handleFontRenderSizeChange_function_type( &::CEGUI::Dimension::handleFontRenderSizeChange )
                , ( bp::arg("window"), bp::arg("font") )
                , "! perform any processing required due to the given font having changed.\n" );
        
        }
        { //::CEGUI::Dimension::operator=
        
            typedef ::CEGUI::Dimension & ( ::CEGUI::Dimension::*assign_function_type )( ::CEGUI::Dimension const & ) ;
            
            Dimension_exposer.def( 
                "assign"
                , assign_function_type( &::CEGUI::Dimension::operator= )
                , ( bp::arg("other") )
                , bp::return_self< >() );
        
        }
        { //::CEGUI::Dimension::setBaseDimension
        
            typedef void ( ::CEGUI::Dimension::*setBaseDimension_function_type )( ::CEGUI::BaseDim const & ) ;
            
            Dimension_exposer.def( 
                "setBaseDimension"
                , setBaseDimension_function_type( &::CEGUI::Dimension::setBaseDimension )
                , ( bp::arg("dim") )
                , "*!\n\
                \n\
                    set the current value for this Dimension.\n\
            \n\
                @param dim\n\
                    object based on a subclass of BaseDim which holds the dimensional value.\n\
                *\n" );
        
        }
        { //::CEGUI::Dimension::setDimensionType
        
            typedef void ( ::CEGUI::Dimension::*setDimensionType_function_type )( ::CEGUI::DimensionType ) ;
            
            Dimension_exposer.def( 
                "setDimensionType"
                , setDimensionType_function_type( &::CEGUI::Dimension::setDimensionType )
                , ( bp::arg("type") )
                , "*!\n\
                \n\
                    Sets what this Dimension represents.\n\
            \n\
                @param type\n\
                    one of the DimensionType enumerated values.\n\
                *\n" );
        
        }
        { //::CEGUI::Dimension::writeXMLToStream
        
            typedef void ( ::CEGUI::Dimension::*writeXMLToStream_function_type )( ::CEGUI::XMLSerializer & ) const;
            
            Dimension_exposer.def( 
                "writeXMLToStream"
                , writeXMLToStream_function_type( &::CEGUI::Dimension::writeXMLToStream )
                , ( bp::arg("xml_stream") )
                , "*!\n\
                \n\
                    Writes an xml representation of this Dimension to  out_stream.\n\
            \n\
                @param xml_stream\n\
                    Stream where xml data should be output.\n\
                *\n" );
        
        }
    }

}
