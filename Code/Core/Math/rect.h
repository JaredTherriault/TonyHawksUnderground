/*****************************************************************************
**																			**
**					   	  Neversoft Entertainment							**
**																		   	**
**				   Copyright (C) 1999 - All Rights Reserved				   	**
**																			**
******************************************************************************
**																			**
**	Project:		Core Library											**
**																			**
**	Module:			Math (MTH)			   									**
**																			**
**	File name:		core/math/Rect.h										**
**																			**
**	Created:		01/31/00	-	mjb										**
**																			**
**	Description:	Math Library Rectangle class							**
**																			**
*****************************************************************************/

#ifndef __CORE_MATH_RECT_H
#define __CORE_MATH_RECT_H

/*****************************************************************************
**								   Includes									**
*****************************************************************************/

	
/*****************************************************************************
**								   Defines									**
*****************************************************************************/

namespace Mth
{
						   


/*****************************************************************************
**							Class Definitions								**
*****************************************************************************/

nTemplateBaseClass ( _T, _Rect )
{
	

public:
				_Rect ( const _T x, const _T y, const _T w, const _T h );
				~_Rect ( );
	
	void		SetOriginX ( const _T ) ;
	void		SetOriginY ( const _T ) ;
	void		SetWidth ( const _T ) ;
	void		SetHeight ( const _T ) ;
	
	const _T	GetOriginX ( void ) const;
	const _T	GetOriginY ( void ) const;
	const _T	GetWidth ( void ) const;
	const _T	GetHeight ( void ) const;

private:

	_T 			x, y, w, h;
						
};

/*****************************************************************************
**							   Type Definitions								**
*****************************************************************************/

typedef _Rect < float > Rect;
typedef _Rect < sint > 	IRect;

/*****************************************************************************
**							 Private Declarations							**
*****************************************************************************/

/*****************************************************************************
**							  Private Prototypes							**
*****************************************************************************/

/*****************************************************************************
**							  Public Declarations							**
*****************************************************************************/

/*****************************************************************************
**							   Public Prototypes							**
*****************************************************************************/

/*****************************************************************************
**								Inline Functions							**
*****************************************************************************/

template < class _T > inline
_Rect< _T >::_Rect ( const _T _x, const _T _y, const _T _w, const _T _h )
: x (_x), y (_y), w(_w), h(_h)
{
	
}

/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************/

template < class _T > inline
_Rect< _T >::~_Rect ( void )
{
	
}

/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************/

template < class _T > inline	
void	_Rect< _T >::SetOriginX ( const _T xval )
{
	

	x = xval;
}

/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************/

template < class _T > inline	
void	_Rect< _T >::SetOriginY ( const _T yval )
{
	

	y = yval;
}

/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************/

template < class _T > inline	
void	_Rect< _T >::SetWidth ( const _T width )
{
	

	w = width;
}

/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************/

template < class _T > inline	
void	_Rect< _T >::SetHeight ( const _T height )
{
	

	h = height;
}

/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************/

template < class _T > inline	
const _T	_Rect< _T >::GetOriginX ( void ) const
{
	

	return x;
}

/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************/

template < class _T > inline	
const _T	_Rect< _T >::GetOriginY ( void )	const
{
	

	return y;
}

/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************/

template < class _T > inline	
const _T	_Rect< _T >::GetWidth ( void ) const
{
	

	return w;
}

/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************/

template < class _T > inline	
const _T	_Rect< _T >::GetHeight ( void ) const
{
	

	return h;
}

/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************/

template < class _T > inline
ostream& operator<< ( ostream& str, const _Rect< _T >& r )
{
	str << "(( " << r.GetOriginX() << ", " << r.GetOriginY() << " ),( " 
					<< r.GetWidth() << ", " << r.GetHeight() << " ))"; 
	return str;
}

/******************************************************************/
/*                                                                */
/*                                                                */
/******************************************************************/

} // namespace Mth

#endif // __CORE_MATH_RECT_H