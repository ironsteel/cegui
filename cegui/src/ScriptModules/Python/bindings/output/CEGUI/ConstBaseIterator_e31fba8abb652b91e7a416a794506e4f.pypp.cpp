// This file has been generated by Py++.

#include "boost/python.hpp"
#include "python_CEGUI.h"
#include "ConstBaseIterator_e31fba8abb652b91e7a416a794506e4f.pypp.hpp"

namespace bp = boost::python;

struct ConstBaseIterator_less__std_scope_map_less_CEGUI_scope_String_comma__CEGUI_scope_WindowFactory_ptr__comma__CEGUI_scope_StringFastLessCompare_comma__std_scope_allocator_less_std_scope_pair_less_CEGUI_scope_String_const_comma__CEGUI_scope_WindowFactory_ptr__greater___greater___greater__comma__CEGUI_scope_WindowFactory_ptr___greater__wrapper : CEGUI::ConstBaseIterator< std::map<CEGUI::String, CEGUI::WindowFactory*, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, CEGUI::WindowFactory*> > >, CEGUI::WindowFactory* >, bp::wrapper< CEGUI::ConstBaseIterator< std::map<CEGUI::String, CEGUI::WindowFactory*, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, CEGUI::WindowFactory*> > >, CEGUI::WindowFactory* > > {

    ConstBaseIterator_less__std_scope_map_less_CEGUI_scope_String_comma__CEGUI_scope_WindowFactory_ptr__comma__CEGUI_scope_StringFastLessCompare_comma__std_scope_allocator_less_std_scope_pair_less_CEGUI_scope_String_const_comma__CEGUI_scope_WindowFactory_ptr__greater___greater___greater__comma__CEGUI_scope_WindowFactory_ptr___greater__wrapper( )
    : CEGUI::ConstBaseIterator<std::map<CEGUI::String, CEGUI::WindowFactory*, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, CEGUI::WindowFactory*> > >, CEGUI::WindowFactory*>( )
      , bp::wrapper< CEGUI::ConstBaseIterator< std::map<CEGUI::String, CEGUI::WindowFactory*, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, CEGUI::WindowFactory*> > >, CEGUI::WindowFactory* > >(){
        // null constructor
    
    }

    virtual ::CEGUI::WindowFactory * getCurrentValue(  ) const {
        bp::override func_getCurrentValue = this->get_override( "getCurrentValue" );
        return func_getCurrentValue(  );
    }

};

void register_ConstBaseIterator_e31fba8abb652b91e7a416a794506e4f_class(){

    { //::CEGUI::ConstBaseIterator< std::map<CEGUI::String, CEGUI::WindowFactory*, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, CEGUI::WindowFactory*> > >, CEGUI::WindowFactory* >
        typedef bp::class_< ConstBaseIterator_less__std_scope_map_less_CEGUI_scope_String_comma__CEGUI_scope_WindowFactory_ptr__comma__CEGUI_scope_StringFastLessCompare_comma__std_scope_allocator_less_std_scope_pair_less_CEGUI_scope_String_const_comma__CEGUI_scope_WindowFactory_ptr__greater___greater___greater__comma__CEGUI_scope_WindowFactory_ptr___greater__wrapper, boost::noncopyable > ConstBaseIterator_e31fba8abb652b91e7a416a794506e4f_exposer_t;
        ConstBaseIterator_e31fba8abb652b91e7a416a794506e4f_exposer_t ConstBaseIterator_e31fba8abb652b91e7a416a794506e4f_exposer = ConstBaseIterator_e31fba8abb652b91e7a416a794506e4f_exposer_t( "ConstBaseIterator_e31fba8abb652b91e7a416a794506e4f", bp::no_init );
        bp::scope ConstBaseIterator_e31fba8abb652b91e7a416a794506e4f_scope( ConstBaseIterator_e31fba8abb652b91e7a416a794506e4f_exposer );
        ConstBaseIterator_e31fba8abb652b91e7a416a794506e4f_exposer.def( bp::init< >("*************************************************************************\n\
           No default construction available\n\
        *************************************************************************\n") );
        { //::CEGUI::ConstBaseIterator< std::map<CEGUI::String, CEGUI::WindowFactory*, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, CEGUI::WindowFactory*> > >, CEGUI::WindowFactory* >::getCurrentValue
        
            typedef CEGUI::ConstBaseIterator< std::map<CEGUI::String, CEGUI::WindowFactory*, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, CEGUI::WindowFactory*> > >, CEGUI::WindowFactory* > exported_class_t;
            typedef ::CEGUI::WindowFactory * ( exported_class_t::*getCurrentValue_function_type )(  ) const;
            
            ConstBaseIterator_e31fba8abb652b91e7a416a794506e4f_exposer.def( 
                "getCurrentValue"
                , bp::pure_virtual( getCurrentValue_function_type(&::CEGUI::ConstBaseIterator< std::map<CEGUI::String, CEGUI::WindowFactory*, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, CEGUI::WindowFactory*> > >, CEGUI::WindowFactory* >::getCurrentValue) )
                , bp::return_value_policy< bp::reference_existing_object >()
                , "*!\n\
            \n\
               Return the value for the item at the current iterator position.\n\
            *\n" );
        
        }
        { //::CEGUI::ConstBaseIterator< std::map<CEGUI::String, CEGUI::WindowFactory*, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, CEGUI::WindowFactory*> > >, CEGUI::WindowFactory* >::isAtEnd
        
            typedef CEGUI::ConstBaseIterator< std::map<CEGUI::String, CEGUI::WindowFactory*, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, CEGUI::WindowFactory*> > >, CEGUI::WindowFactory* > exported_class_t;
            typedef bool ( exported_class_t::*isAtEnd_function_type )(  ) const;
            
            ConstBaseIterator_e31fba8abb652b91e7a416a794506e4f_exposer.def( 
                "isAtEnd"
                , isAtEnd_function_type( &::CEGUI::ConstBaseIterator< std::map<CEGUI::String, CEGUI::WindowFactory*, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, CEGUI::WindowFactory*> > >, CEGUI::WindowFactory* >::isAtEnd )
                , "*!\n\
            \n\
               Return whether the current iterator position is at the end of the iterators range.\n\
            *\n" );
        
        }
        { //::CEGUI::ConstBaseIterator< std::map<CEGUI::String, CEGUI::WindowFactory*, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, CEGUI::WindowFactory*> > >, CEGUI::WindowFactory* >::isAtStart
        
            typedef CEGUI::ConstBaseIterator< std::map<CEGUI::String, CEGUI::WindowFactory*, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, CEGUI::WindowFactory*> > >, CEGUI::WindowFactory* > exported_class_t;
            typedef bool ( exported_class_t::*isAtStart_function_type )(  ) const;
            
            ConstBaseIterator_e31fba8abb652b91e7a416a794506e4f_exposer.def( 
                "isAtStart"
                , isAtStart_function_type( &::CEGUI::ConstBaseIterator< std::map<CEGUI::String, CEGUI::WindowFactory*, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, CEGUI::WindowFactory*> > >, CEGUI::WindowFactory* >::isAtStart )
                , "*!\n\
            \n\
               Return whether the current iterator position is at the start of the iterators range.\n\
            *\n" );
        
        }
        ConstBaseIterator_e31fba8abb652b91e7a416a794506e4f_exposer.def( bp::self != bp::self );
        { //::CEGUI::ConstBaseIterator< std::map<CEGUI::String, CEGUI::WindowFactory*, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, CEGUI::WindowFactory*> > >, CEGUI::WindowFactory* >::operator=
        
            typedef CEGUI::ConstBaseIterator< std::map<CEGUI::String, CEGUI::WindowFactory*, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, CEGUI::WindowFactory*> > >, CEGUI::WindowFactory* > exported_class_t;
            typedef ::CEGUI::ConstBaseIterator< std::map<CEGUI::String, CEGUI::WindowFactory*, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, CEGUI::WindowFactory*> > >, CEGUI::WindowFactory* > & ( exported_class_t::*assign_function_type )( ::CEGUI::ConstBaseIterator< std::map<CEGUI::String, CEGUI::WindowFactory*, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, CEGUI::WindowFactory*> > >, CEGUI::WindowFactory* > const & ) ;
            
            ConstBaseIterator_e31fba8abb652b91e7a416a794506e4f_exposer.def( 
                "assign"
                , assign_function_type( &::CEGUI::ConstBaseIterator< std::map<CEGUI::String, CEGUI::WindowFactory*, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, CEGUI::WindowFactory*> > >, CEGUI::WindowFactory* >::operator= )
                , ( bp::arg("rhs") )
                , bp::return_self< >()
                , "*!\n\
            \n\
               ConstBaseIterator assignment operator\n\
            *\n" );
        
        }
        ConstBaseIterator_e31fba8abb652b91e7a416a794506e4f_exposer.def( bp::self == bp::self );
        { //::CEGUI::ConstBaseIterator< std::map<CEGUI::String, CEGUI::WindowFactory*, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, CEGUI::WindowFactory*> > >, CEGUI::WindowFactory* >::toEnd
        
            typedef CEGUI::ConstBaseIterator< std::map<CEGUI::String, CEGUI::WindowFactory*, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, CEGUI::WindowFactory*> > >, CEGUI::WindowFactory* > exported_class_t;
            typedef void ( exported_class_t::*toEnd_function_type )(  ) ;
            
            ConstBaseIterator_e31fba8abb652b91e7a416a794506e4f_exposer.def( 
                "toEnd"
                , toEnd_function_type( &::CEGUI::ConstBaseIterator< std::map<CEGUI::String, CEGUI::WindowFactory*, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, CEGUI::WindowFactory*> > >, CEGUI::WindowFactory* >::toEnd )
                , "*!\n\
            \n\
               Set the iterator current position to the end position.\n\
            *\n" );
        
        }
        { //::CEGUI::ConstBaseIterator< std::map<CEGUI::String, CEGUI::WindowFactory*, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, CEGUI::WindowFactory*> > >, CEGUI::WindowFactory* >::toStart
        
            typedef CEGUI::ConstBaseIterator< std::map<CEGUI::String, CEGUI::WindowFactory*, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, CEGUI::WindowFactory*> > >, CEGUI::WindowFactory* > exported_class_t;
            typedef void ( exported_class_t::*toStart_function_type )(  ) ;
            
            ConstBaseIterator_e31fba8abb652b91e7a416a794506e4f_exposer.def( 
                "toStart"
                , toStart_function_type( &::CEGUI::ConstBaseIterator< std::map<CEGUI::String, CEGUI::WindowFactory*, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, CEGUI::WindowFactory*> > >, CEGUI::WindowFactory* >::toStart )
                , "*!\n\
            \n\
               Set the iterator current position to the start position.\n\
            *\n" );
        
        }
    }

}