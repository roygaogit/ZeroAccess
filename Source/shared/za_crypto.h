/*******************************************************************************
*
*  (C) COPYRIGHT AUTHORS, 2016
*
*  TITLE:       ZA_CRYPTO.H
*
*  VERSION:     1.00
*
*  DATE:        17 Jan 2016
*
*  ZeroAccess cryptography.
*
* THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF
* ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED
* TO THE IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A
* PARTICULAR PURPOSE.
*
*******************************************************************************/
#pragma once

NTSTATUS SfcIsFileLegit(
	_In_ LPWSTR lpFileName,
	_In_ PBYTE BotKey,
	_In_ DWORD BotKeySize
	);

BOOL SfcValidateFileHeader(
	HCRYPTPROV hCryptoProv,
	HCRYPTKEY hCryptKey,
	ZA_FILEHEADER *FileHeader
	);
