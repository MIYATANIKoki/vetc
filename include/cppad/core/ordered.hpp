# ifndef CPPAD_CORE_ORDERED_HPP
# define CPPAD_CORE_ORDERED_HPP
// SPDX-License-Identifier: EPL-2.0 OR GPL-2.0-or-later
// SPDX-FileCopyrightText: Bradley M. Bell <bradbell@seanet.com>
// SPDX-FileContributor: 2003-22 Bradley M. Bell
// ----------------------------------------------------------------------------

# include <cppad/local/define.hpp>

namespace CppAD { // BEGIN_CPPAD_NAMESPACE

/*!
\file ordered.hpp
Check and AD values ordering properties relative to zero.
*/

// GreaterThanZero ============================================================
/*!
Check if an AD<Base> is greater than zero.

\param x
value we are checking.

\return
returns true iff the x is greater than zero.
*/
template <class Base>
CPPAD_INLINE_FRIEND_TEMPLATE_FUNCTION
bool GreaterThanZero(const AD<Base> &x)
{  return GreaterThanZero(x.value_); }
// GreaterThanOrZero =========================================================
/*!
Check if an AD<Base> is greater than or equal zero.

\param x
value we are checking.

\return
returns true iff the x is greater than or equal zero.
*/
template <class Base>
CPPAD_INLINE_FRIEND_TEMPLATE_FUNCTION
bool GreaterThanOrZero(const AD<Base> &x)
{  return GreaterThanOrZero(x.value_); }
// LessThanZero ============================================================
/*!
Check if an AD<Base> is less than zero.

\param x
value we are checking.

\return
returns true iff the x is less than zero.
*/
template <class Base>
CPPAD_INLINE_FRIEND_TEMPLATE_FUNCTION
bool LessThanZero(const AD<Base> &x)
{  return LessThanZero(x.value_); }
// LessThanOrZero =========================================================
/*!
Check if an AD<Base> is less than or equal zero.

\param x
value we are checking.

\return
returns true iff the x is less than or equal zero.
*/
template <class Base>
CPPAD_INLINE_FRIEND_TEMPLATE_FUNCTION
bool LessThanOrZero(const AD<Base> &x)
{  return LessThanOrZero(x.value_); }
// abs_geq =========================================================
/*!
Check if absolute value of one AD<Base> is greater or equal another.

\param x
value we are checking if it is greater than or equal other.

\param y
value we are checking if it is less than other.

\return
returns true iff the absolute value of x is greater than or equal
absolute value of y.
*/
template <class Base>
CPPAD_INLINE_FRIEND_TEMPLATE_FUNCTION
bool abs_geq(const AD<Base>& x, const AD<Base>& y)
{  return abs_geq(x.value_, y.value_); }
// ============================================================================
} // END_CPPAD_NAMESPACE
# endif
