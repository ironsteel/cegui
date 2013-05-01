// This file has been generated by Py++.

#include "boost/python.hpp"
#include "python_CEGUI.h"
#include "ElementEventArgs.pypp.hpp"

namespace bp = boost::python;

struct ElementEventArgs_wrapper : CEGUI::ElementEventArgs, bp::wrapper< CEGUI::ElementEventArgs > {

    ElementEventArgs_wrapper(CEGUI::ElementEventArgs const & arg )
    : CEGUI::ElementEventArgs( arg )
      , bp::wrapper< CEGUI::ElementEventArgs >(){
        // copy constructor
        
    }

    ElementEventArgs_wrapper(::CEGUI::Element * element )
    : CEGUI::ElementEventArgs( boost::python::ptr(element) )
      , bp::wrapper< CEGUI::ElementEventArgs >(){
        // constructor
    
    }

    static ::CEGUI::Element * get_element(CEGUI::ElementEventArgs const & inst ){
        return inst.element;
    }
    
    static void set_element( CEGUI::ElementEventArgs & inst, ::CEGUI::Element * new_value ){ 
        inst.element = new_value;
    }

};

void register_ElementEventArgs_class(){

    { //::CEGUI::ElementEventArgs
        typedef bp::class_< ElementEventArgs_wrapper, bp::bases< CEGUI::EventArgs > > ElementEventArgs_exposer_t;
        ElementEventArgs_exposer_t ElementEventArgs_exposer = ElementEventArgs_exposer_t( "ElementEventArgs", "*!\n\
        \n\
            EventArgs based class that is used for objects passed to handlers triggered\n\
            for events concerning some Element object.\n\
        \n\
        @see CEGUI.Element\n\
        *\n", bp::init< CEGUI::Element * >(( bp::arg("element") )) );
        bp::scope ElementEventArgs_scope( ElementEventArgs_exposer );
        bp::implicitly_convertible< CEGUI::Element *, CEGUI::ElementEventArgs >();
        ElementEventArgs_exposer.add_property( "element"
                    , bp::make_function( (::CEGUI::Element * (*)( ::CEGUI::ElementEventArgs const & ))(&ElementEventArgs_wrapper::get_element), bp::return_internal_reference< >() )
                    , bp::make_function( (void (*)( ::CEGUI::ElementEventArgs &,::CEGUI::Element * ))(&ElementEventArgs_wrapper::set_element), bp::with_custodian_and_ward_postcall< 1, 2 >() )
                    , "! pointer to an Element object of relevance to the event.\n" );
    }

}
