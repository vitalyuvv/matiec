/*
 * (c) 2009 Mario de Sousa
 *
 * Offered to the public under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2 of the
 * License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General
 * Public License for more details.
 *
 * This code is made available on the understanding that it will not be
 * used in safety-critical situations without a full and competent review.
 */

/*
 * An IEC 61131-3 IL and ST compiler.
 *
 * Based on the
 * FINAL DRAFT - IEC 61131-3, 2nd Ed. (2001-12-10)
 *
 */


/*
 * This is the main stage 3a file.
 *
 * In stage 3a some helpful symbol tables are instanciated and populated.
 * These symbol tables wll then be used by stage3b and atage4 code generators.
 */






// #include <stdio.h>  /* required for NULL */
#include "../util/symtable.hh"
#include "../util/dsymtable.hh"
#include "../absyntax/visitor.hh"





/* A symbol table with all globally declared functions... */
extern function_declaration_c null_symbol1;
extern dsymtable_c<function_declaration_c *, &null_symbol1> function_symtable;

/* A symbol table with all globally declared functions block types... */
extern function_block_declaration_c null_symbol2;
extern symtable_c<function_block_declaration_c *, &null_symbol2> function_block_type_symtable;

/* A symbol table with all globally declared program types... */
extern program_declaration_c null_symbol3;
extern symtable_c<program_declaration_c *, &null_symbol3> program_type_symtable;

/* A symbol table with all user declared type definitions... */
/* Note that function block types and program types have their
 * own symbol tables, so do not get placed in this symbol table!
 */
extern symbol_c null_symbol4;
extern symtable_c<symbol_c *, &null_symbol4> type_symtable;



/***********************************************************************/
/***********************************************************************/
/***********************************************************************/
/***********************************************************************/

/*
#include "spec_init_separator.cc"
#include "function_param_iterator.cc"
#include "function_call_iterator.cc"
#include "function_call_param_iterator.cc"
#include "type_initial_value.cc"
#include "search_fb_instance_decl.cc"
#include "search_fb_typedecl.cc"
#include "search_base_type.cc"
#include "search_var_instance_decl.cc"
#include "decompose_var_instance_name.cc"
#include "search_varfb_instance_type.cc"
#include "search_constant_type.cc"
#include "search_expression_type.cc"

#include "generate_c_base.cc"
#include "generate_c_typedecl.cc"
#include "generate_c_sfcdecl.cc"
#include "generate_c_vardecl.cc"
#include "generate_c_configbody.cc"
#include "generate_location_list.cc"
#include "generate_var_list.cc"
*/

/***********************************************************************/
/***********************************************************************/
/***********************************************************************/
/***********************************************************************/
/***********************************************************************/




void search_utils_init(symbol_c *tree_root);
