#pragma once

#include "Packet.h"

class CPythonSash : public CSingleton<CPythonSash>
{
	public:
		long long	dwPrice;
		typedef std::vector<TSashMaterial> TSashMaterials;
	
	public:
		CPythonSash();
		virtual ~CPythonSash();
		
		void	Clear();
		void	AddMaterial(long long dwRefPrice, BYTE bPos, TItemPos tPos);
		void	AddResult(DWORD dwItemVnum, DWORD dwMinAbs, DWORD dwMaxAbs);
		void	RemoveMaterial(long long dwRefPrice, BYTE bPos);
		long long	GetPrice() {return dwPrice;}
		bool	GetAttachedItem(BYTE bPos, BYTE & bHere, WORD & wCell);
		void	GetResultItem(DWORD & dwItemVnum, DWORD & dwMinAbs, DWORD & dwMaxAbs);
	
	protected:
		TSashResult	m_vSashResult;
		TSashMaterials	m_vSashMaterials;
};
