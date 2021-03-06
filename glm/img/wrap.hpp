///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2009 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2009-11-25
// Updated : 2009-11-25
// Licence : This source is under MIT License
// File    : glm/img/wrap.hpp
///////////////////////////////////////////////////////////////////////////////////////////////////
// Dependency:
// - GLM core
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef glm_img_wrap
#define glm_img_wrap

// Dependency:
#include "../glm.hpp"

namespace glm
{
	namespace test{
		bool main_img_wrap();
	}//namespace test

	namespace img
	{
		//! GLM_IMG_wrap: Wrapping mode using my texture samping.
		namespace wrap
		{
			//! Simulate GL_CLAMP OpenGL wrap mode
			//! From GLM_IMG_wrap extension.
			template <typename genType> 
			genType clamp(genType const & Texcoord);

			//! Simulate GL_REPEAT OpenGL wrap mode
			//! From GLM_IMG_wrap extension.
			template <typename genType> 
			genType repeat(genType const & Texcoord);

			//! Simulate GL_MIRROR_REPEAT OpenGL wrap mode
			//! From GLM_IMG_wrap extension.
			template <typename genType> 
			genType mirrorRepeat(genType const & Texcoord);

		}//namespace wrap
	}//namespace img
}//namespace glm

#define GLM_IMG_wrap namespace img::wrap
#ifndef GLM_IMG_GLOBAL
namespace glm {using GLM_IMG_wrap;}
#endif//GLM_IMG_GLOBAL

#include "wrap.inl"

#endif//glm_img_wrap
