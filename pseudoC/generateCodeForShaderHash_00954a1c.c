// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: generateCodeForShaderHash
// Entry Point: 00954a1c
// Size: 640 bytes
// Signature: undefined __thiscall generateCodeForShaderHash(MaterialShaderManager * this, MaterialShaderHash * param_1, basic_string param_2, basic_string * param_3, map * * param_4, map * * param_5)


/* MaterialShaderManager::generateCodeForShaderHash(MaterialShaderHash const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&,
   std::__ndk1::map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, unsigned int, std::__ndk1::less<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, unsigned int> > > const*&,
   std::__ndk1::map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, unsigned int, std::__ndk1::less<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, unsigned int> > > const*&)
    */

void __thiscall
MaterialShaderManager::generateCodeForShaderHash
          (MaterialShaderManager *this,MaterialShaderHash *param_1,basic_string param_2,
          basic_string *param_3,map **param_4,map **param_5)

{
  byte *pbVar1;
  uint uVar2;
  long lVar3;
  void *pvVar4;
  CustomShaderInfo *pCVar5;
  ulong *puVar6;
  MaterialShaderManager *pMVar7;
  byte *pbVar8;
  MaterialShaderManager **ppMVar9;
  MaterialShaderManager **ppMVar10;
  MaterialShaderManager **ppMVar11;
  CustomShaderInfo *pCVar12;
  byte local_98 [16];
  void *local_88;
  ulong local_80;
  ulong uStack_78;
  void *local_70;
  long local_68;
  
  pbVar8 = (byte *)(ulong)param_2;
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  reserve((ulong)param_3);
  uVar2 = *(uint *)(param_1 + 4);
  if (uVar2 != 0) {
    Mutex::enterCriticalSection();
    ppMVar10 = (MaterialShaderManager **)(this + 0xe0);
    ppMVar11 = (MaterialShaderManager **)*ppMVar10;
    ppMVar9 = ppMVar10;
    if (ppMVar11 != (MaterialShaderManager **)0x0) {
      do {
        if (*(uint *)(ppMVar11 + 4) >= uVar2) {
          ppMVar9 = ppMVar11;
        }
        ppMVar11 = (MaterialShaderManager **)ppMVar11[*(uint *)(ppMVar11 + 4) < uVar2];
      } while (ppMVar11 != (MaterialShaderManager **)0x0);
      if ((ppMVar9 != ppMVar10) && (*(uint *)(ppMVar9 + 4) <= uVar2)) {
        pCVar12 = (CustomShaderInfo *)ppMVar9[5];
        *param_4 = (map *)((MaterialShaderManager *)pCVar12 + 0x20);
        *param_5 = (map *)((MaterialShaderManager *)pCVar12 + 0x38);
        std::__ndk1::operator+("// CUSTOM SHADER: ",(basic_string *)(ppMVar9[5] + 0x68));
                    /* try { // try from 00954c24 to 00954c33 has its CatchHandler @ 00954ccc */
        puVar6 = (ulong *)std::__ndk1::
                          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          ::append((char *)local_98);
        local_70 = (void *)puVar6[2];
        uStack_78 = puVar6[1];
        local_80 = *puVar6;
        puVar6[1] = 0;
        puVar6[2] = 0;
        *puVar6 = 0;
        pvVar4 = (void *)((ulong)&local_80 | 1);
        if ((local_80 & 1) != 0) {
          pvVar4 = local_70;
        }
                    /* try { // try from 00954c6c to 00954c73 has its CatchHandler @ 00954c9c */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append((char *)param_3,(ulong)pvVar4);
        if ((local_80 & 1) != 0) {
          operator_delete(local_70);
        }
        if ((local_98[0] & 1) != 0) {
          operator_delete(local_88);
        }
        goto LAB_00954abc;
      }
    }
  }
  pCVar12 = (CustomShaderInfo *)0x0;
LAB_00954abc:
  pbVar1 = *(byte **)(pbVar8 + 0x10);
  if ((*pbVar8 & 1) == 0) {
    pbVar1 = pbVar8 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)param_3,(ulong)pbVar1);
  appendShaderDefineStringForHash(param_3,param_1);
  if (pCVar12 != (CustomShaderInfo *)0x0) {
    pCVar5 = pCVar12 + 0x51;
    if (((byte)pCVar12[0x50] & 1) != 0) {
      pCVar5 = *(CustomShaderInfo **)(pCVar12 + 0x60);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)param_3,(ulong)pCVar5);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)param_3);
  }
  if ((*(ulong *)(param_1 + 8) & 0x7f) == 0x13) {
    pMVar7 = this + 0x31;
    if (((byte)this[0x30] & 1) != 0) {
      pMVar7 = *(MaterialShaderManager **)(this + 0x40);
    }
  }
  else if ((*(ulong *)(param_1 + 8) & 0x3ff80) == 0x3c000) {
    pMVar7 = this + 0x49;
    if (((byte)this[0x48] & 1) != 0) {
      pMVar7 = *(MaterialShaderManager **)(this + 0x58);
    }
  }
  else {
    pMVar7 = this + 0x19;
    if (((byte)this[0x18] & 1) != 0) {
      pMVar7 = *(MaterialShaderManager **)(this + 0x28);
    }
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)param_3,(ulong)pMVar7);
  applyCodeInjectionsToShaderString(param_3,pCVar12);
  if (uVar2 != 0) {
    Mutex::leaveCriticalSection();
  }
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


