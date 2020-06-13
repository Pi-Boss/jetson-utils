/*
 * Copyright (c) 2017, NVIDIA CORPORATION. All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */

#ifndef __CUDA_YUV_CONVERT_H
#define __CUDA_YUV_CONVERT_H


#include "cudaUtility.h"


//////////////////////////////////////////////////////////////////////////////////
/// @name YUV I420 4:2:0 planar to RGB
/// @ingroup colorspace
//////////////////////////////////////////////////////////////////////////////////

///@{

/**
 * Convert a YUV I420 planar image to RGB uchar3.
 * @ingroup colorspace
 */
cudaError_t cudaI420ToRGB(void* input, uchar3* output, size_t width, size_t height);

/**
 * Convert a YUV I420 planar image to RGB uchar3.
 * @ingroup colorspace
 */
cudaError_t cudaI420ToRGB(void* input, size_t inputPitch, uchar3* output, size_t outputPitch, size_t width, size_t height);

///@}


//////////////////////////////////////////////////////////////////////////////////
/// @name RGB to YUV I420 4:2:0 planar
/// @ingroup colorspace
//////////////////////////////////////////////////////////////////////////////////

///@{

/**
 * Convert an RGB uchar3 buffer into YUV I420 planar.
 * @ingroup colorspace
 */
cudaError_t cudaRGBToI420( uchar3* input, void* output, size_t width, size_t height );

/**
 * Convert an RGB uchar3 texture into YUV I420 planar.
 * @ingroup colorspace
 */
cudaError_t cudaRGBToI420( uchar3* input, size_t inputPitch, void* output, size_t outputPitch, size_t width, size_t height );

/**
 * Convert an RGB float3 buffer into YUV I420 planar.
 * @ingroup colorspace
 */
cudaError_t cudaRGBToI420( float3* input, void* output, size_t width, size_t height );

/**
 * Convert an RGB float3 texture into YUV I420 planar.
 * @ingroup colorspace
 */
cudaError_t cudaRGBToI420( float3* input, size_t inputPitch, void* output, size_t outputPitch, size_t width, size_t height );

/**
 * Convert an RGBA uchar4 buffer into YUV I420 planar.
 * @ingroup colorspace
 */
cudaError_t cudaRGBAToI420( uchar4* input, void* output, size_t width, size_t height );

/**
 * Convert an RGBA uchar4 texture into YUV I420 planar.
 * @ingroup colorspace
 */
cudaError_t cudaRGBAToI420( uchar4* input, size_t inputPitch, void* output, size_t outputPitch, size_t width, size_t height );

/**
 * Convert an RGBA float4 buffer into YUV I420 planar.
 * @ingroup colorspace
 */
cudaError_t cudaRGBAToI420( float4* input, void* output, size_t width, size_t height );

/**
 * Convert an RGBA float4 texture into YUV I420 planar.
 * @ingroup colorspace
 */
cudaError_t cudaRGBAToI420( float4* input, size_t inputPitch, void* output, size_t outputPitch, size_t width, size_t height );

///@}


//////////////////////////////////////////////////////////////////////////////////
/// @name RGB to YUV YV12 4:2:0 planar
/// @ingroup colorspace
//////////////////////////////////////////////////////////////////////////////////

///@{

/**
 * Convert an RGB uchar3 buffer into YUV YV12 planar.
 * @ingroup colorspace
 */
cudaError_t cudaRGBToYV12( uchar3* input, void* output, size_t width, size_t height );

/**
 * Convert an RGB uchar3 texture into YUV YV12 planar.
 * @ingroup colorspace
 */
cudaError_t cudaRGBToYV12( uchar3* input, size_t inputPitch, void* output, size_t outputPitch, size_t width, size_t height );

/**
 * Convert an RGB float3 buffer into YUV YV12 planar.
 * @ingroup colorspace
 */
cudaError_t cudaRGBToYV12( float3* input, void* output, size_t width, size_t height );

/**
 * Convert an RGB float3 texture into YUV YV12 planar.
 * @ingroup colorspace
 */
cudaError_t cudaRGBToYV12( float3* input, size_t inputPitch, void* output, size_t outputPitch, size_t width, size_t height );

/**
 * Convert an RGBA uchar4 buffer into YUV YV12 planar.
 * @ingroup colorspace
 */
cudaError_t cudaRGBAToYV12( uchar4* input, void* output, size_t width, size_t height );

/**
 * Convert an RGBA uchar4 texture into YUV YV12 planar.
 * @ingroup colorspace
 */
cudaError_t cudaRGBAToYV12( uchar4* input, size_t inputPitch, void* output, size_t outputPitch, size_t width, size_t height );

/**
 * Convert an RGBA float4 buffer into YUV YV12 planar.
 * @ingroup colorspace
 */
cudaError_t cudaRGBAToYV12( float4* input, void* output, size_t width, size_t height );

/**
 * Convert an RGBA float4 texture into YUV YV12 planar.
 * @ingroup colorspace
 */
cudaError_t cudaRGBAToYV12( float4* input, size_t inputPitch, void* output, size_t outputPitch, size_t width, size_t height );

///@}


//////////////////////////////////////////////////////////////////////////////////
/// @name YUV 4:2:2 packed (UYVY & YUYV) to RGB
/// @ingroup colorspace
//////////////////////////////////////////////////////////////////////////////////

///@{

/**
 * Convert a UYVY 422 packed image into RGBA uchar4.
 * @ingroup colorspace
 */
cudaError_t cudaUYVYToRGBA( void* input, uchar4* output, size_t width, size_t height );

/**
 * Convert a UYVY 422 packed image into RGBA uchar4.
 * @ingroup colorspace
 */
cudaError_t cudaUYVYToRGBA( void* input, size_t inputPitch, uchar4* output, size_t outputPitch, size_t width, size_t height );

/**
 * Convert a UYVY 422 packed image into RGBA float4.
 * @ingroup colorspace
 */
cudaError_t cudaUYVYToRGBA( void* input, float4* output, size_t width, size_t height );

/**
 * Convert a UYVY 422 packed image into RGBA float4.
 * @ingroup colorspace
 */
cudaError_t cudaUYVYToRGBA( void* input, size_t inputPitch, float4* output, size_t outputPitch, size_t width, size_t height );

/**
 * Convert a YUYV 422 packed image into RGBA uchar4.
 * @ingroup colorspace
 */
cudaError_t cudaYUYVToRGBA( void* input, uchar4* output, size_t width, size_t height );

/**
 * Convert a YUYV 422 packed image into RGBA uchar4.
 * @ingroup colorspace
 */
cudaError_t cudaYUYVToRGBA( void* input, size_t inputPitch, uchar4* output, size_t outputPitch, size_t width, size_t height );

/**
 * Convert a YUYV 422 packed image into RGBA float4.
 * @ingroup colorspace
 */
cudaError_t cudaYUYVToRGBA( void* input, float4* output, size_t width, size_t height );

/**
 * Convert a YUYV 422 packed image into RGBA float4.
 * @ingroup colorspace
 */
cudaError_t cudaYUYVToRGBA( void* input, size_t inputPitch, float4* output, size_t outputPitch, size_t width, size_t height );

///@}


//////////////////////////////////////////////////////////////////////////////////
/// @name UYUV 4:2:2 packed (UYVY & YUYV) to grayscale
/// @ingroup colorspace
//////////////////////////////////////////////////////////////////////////////////

///@{

/**
 * Convert a UYVY 422 packed image into a floating-point grayscale image.
 * @ingroup colorspace
 */
cudaError_t cudaUYVYToGray( void* input, float* output, size_t width, size_t height );

/**
 * Convert a UYVY 422 packed image into a floating-point grayscale image.
 * @ingroup colorspace
 */
cudaError_t cudaUYVYToGray( void* input, size_t inputPitch, float* output, size_t outputPitch, size_t width, size_t height );

/**
 * Convert a YUYV 422 packed image into a floating-point grayscale image.
 * @ingroup colorspace
 */
cudaError_t cudaYUYVToGray( void* input, float* output, size_t width, size_t height );

/**
 * Convert a YUYV 422 packed image into a floating-point grayscale image.
 * @ingroup colorspace
 */
cudaError_t cudaYUYVToGray( void* input, size_t inputPitch, float* output, size_t outputPitch, size_t width, size_t height );

///@}


//////////////////////////////////////////////////////////////////////////////////
/// @name YUV NV12 to RGB
/// @ingroup colorspace
//////////////////////////////////////////////////////////////////////////////////

///@{

/**
 * Convert an NV12 texture (semi-planar 4:2:0) to RGB uchar3 format.
 * NV12 = 8-bit Y plane followed by an interleaved U/V plane with 2x2 subsampling.
 * @ingroup colorspace
 */
cudaError_t cudaNV12ToRGB( void* input, uchar3* output, size_t width, size_t height );

/**
 * Convert an NV12 texture (semi-planar 4:2:0) to RGB uchar3 format.
 * NV12 = 8-bit Y plane followed by an interleaved U/V plane with 2x2 subsampling.
 * @ingroup colorspace
 */
cudaError_t cudaNV12ToRGB( void* input, size_t inputPitch, uchar3* output, size_t outputPitch, size_t width, size_t height );

/**
 * Convert an NV12 texture (semi-planar 4:2:0) to RGB float3 format.
 * NV12 = 8-bit Y plane followed by an interleaved U/V plane with 2x2 subsampling.
 * @ingroup colorspace
 */
cudaError_t cudaNV12ToRGB( void* input, float3* output, size_t width, size_t height );

/**
 * Convert an NV12 texture (semi-planar 4:2:0) to RGB float3 format.
 * NV12 = 8-bit Y plane followed by an interleaved U/V plane with 2x2 subsampling.
 * @ingroup colorspace
 */
cudaError_t cudaNV12ToRGB( void* input, size_t inputPitch, float3* output, size_t outputPitch, size_t width, size_t height );

/**
 * Convert an NV12 texture (semi-planar 4:2:0) to RGBA uchar4 format.
 * NV12 = 8-bit Y plane followed by an interleaved U/V plane with 2x2 subsampling.
 * @ingroup colorspace
 */
cudaError_t cudaNV12ToRGBA( void* input, uchar4* output, size_t width, size_t height );

/**
 * Convert an NV12 texture (semi-planar 4:2:0) to RGBA uchar4 format.
 * NV12 = 8-bit Y plane followed by an interleaved U/V plane with 2x2 subsampling.
 * @ingroup colorspace
 */
cudaError_t cudaNV12ToRGBA( void* input, size_t inputPitch, uchar4* output, size_t outputPitch, size_t width, size_t height );

/**
 * Convert an NV12 texture (semi-planar 4:2:0) to RGBA float4 format.
 * NV12 = 8-bit Y plane followed by an interleaved U/V plane with 2x2 subsampling.
 * @ingroup colorspace
 */
cudaError_t cudaNV12ToRGBA( void* input, float4* output, size_t width, size_t height );

/**
 * Convert an NV12 texture (semi-planar 4:2:0) to RGBA float4 format.
 * NV12 = 8-bit Y plane followed by an interleaved U/V plane with 2x2 subsampling.
 * @ingroup colorspace
 */
cudaError_t cudaNV12ToRGBA( void* input, size_t inputPitch, float4* output, size_t outputPitch, size_t width, size_t height );

///@}

#endif

