// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: reloadCustomShader
// Entry Point: 0095101c
// Size: 3348 bytes
// Signature: undefined __thiscall reloadCustomShader(MaterialManager * this, CustomShader * param_1, vector * param_2)


/* MaterialManager::reloadCustomShader(CustomShader*, std::__ndk1::vector<GsMaterial*,
   std::__ndk1::allocator<GsMaterial*> >&) */

void __thiscall
MaterialManager::reloadCustomShader(MaterialManager *this,CustomShader *param_1,vector *param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  long lVar3;
  byte **ppbVar4;
  bool bVar5;
  int iVar6;
  byte **ppbVar7;
  CustomShader *pCVar8;
  GsMaterial **ppGVar9;
  undefined8 *puVar10;
  void *pvVar11;
  ulong uVar12;
  char *pcVar13;
  ResourceManager *pRVar14;
  uint uVar15;
  byte *pbVar16;
  long lVar17;
  GsMaterial *pGVar18;
  MaterialManager **ppMVar19;
  byte *pbVar20;
  long lVar21;
  long lVar22;
  MaterialManager *pMVar23;
  byte *pbVar24;
  Resource *pRVar25;
  byte *pbVar26;
  MaterialManager **ppMVar27;
  byte **ppbVar28;
  undefined8 *puVar29;
  ulong uVar30;
  long lVar31;
  GsMaterial *pGVar32;
  ulong uVar33;
  void *pvVar34;
  ulong uVar35;
  Resource **ppRVar36;
  size_t sVar37;
  Resource **ppRVar38;
  ulong uVar39;
  ulong local_d8;
  byte **local_c0;
  uint local_b4;
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  byte **local_98;
  byte **local_90;
  byte **local_88;
  byte **local_80;
  byte **local_78;
  byte **local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  Mutex::enterCriticalSection();
  FUN_00f276d0(1,param_1 + 8);
  lVar21 = *(long *)(param_1 + 0x110);
  local_78 = (byte **)0x0;
  local_70 = (byte **)0x0;
  local_80 = (byte **)0x0;
  uVar30 = (*(long *)(param_1 + 0x118) - lVar21 >> 5) * 0x6db6db6db6db6db7;
  uVar39 = uVar30 & 0xffffffff;
  if (uVar39 == 0) {
    ppbVar7 = (byte **)0x0;
    local_c0 = (byte **)0x0;
    local_98 = (byte **)0x0;
    local_90 = (byte **)0x0;
    local_88 = (byte **)0x0;
  }
  else {
    uVar35 = uVar39 * 0x18;
                    /* try { // try from 009510ac to 009510b3 has its CatchHandler @ 00951d40 */
    ppbVar7 = (byte **)operator_new(uVar35);
    uVar33 = (uVar35 - 0x18) / 0x18;
    local_70 = ppbVar7 + uVar39 * 3;
    sVar37 = uVar33 * 0x18 + 0x18;
    local_80 = ppbVar7;
    memset(ppbVar7,0,sVar37);
    local_78 = ppbVar7 + uVar33 * 3 + 3;
    local_98 = (byte **)0x0;
    local_90 = (byte **)0x0;
    local_88 = (byte **)0x0;
                    /* try { // try from 00951104 to 0095110b has its CatchHandler @ 00951d30 */
    local_c0 = (byte **)operator_new(uVar35);
    local_88 = local_c0 + uVar39 * 3;
    local_98 = local_c0;
    memset(local_c0,0,sVar37);
    local_90 = local_c0 + (uVar33 + 1) * 3;
  }
  uVar15 = 0;
  do {
    uVar39 = (ulong)uVar15;
    if (uVar39 < uVar30) {
      lVar21 = lVar21 + uVar39 * 0xe0;
      uVar30 = (ulong)(*(long *)(lVar21 + 0x60) - *(long *)(lVar21 + 0x58)) >> 3;
    }
    else {
      uVar30 = 0;
    }
    uVar30 = uVar30 & 0xffffffff;
    pbVar16 = ppbVar7[uVar39 * 3 + 1];
    pbVar24 = ppbVar7[(ulong)uVar15 * 3];
    lVar21 = (long)pbVar16 - (long)pbVar24 >> 3;
    bVar5 = uVar30 < (ulong)(lVar21 * -0x5555555555555555);
    uVar33 = uVar30 + lVar21 * 0x5555555555555555;
    if (bVar5 || uVar33 == 0) {
      if (bVar5) {
        pbVar24 = pbVar24 + uVar30 * 0x18;
        while (pbVar20 = pbVar16, pbVar20 != pbVar24) {
          pbVar16 = pbVar20 + -0x18;
          if ((*pbVar16 & 1) != 0) {
            operator_delete(*(void **)(pbVar20 + -8));
          }
        }
        ppbVar7[uVar39 * 3 + 1] = pbVar24;
      }
    }
    else {
                    /* try { // try from 009511e8 to 0095128b has its CatchHandler @ 00951d74 */
      std::__ndk1::
      vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
      ::__append((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                  *)(ppbVar7 + (ulong)uVar15 * 3),uVar33);
    }
    uVar30 = (*(long *)(param_1 + 0x118) - *(long *)(param_1 + 0x110) >> 5) * 0x6db6db6db6db6db7;
    if (uVar30 < uVar39 || uVar30 - uVar39 == 0) {
      uVar30 = 0;
    }
    else {
      lVar21 = *(long *)(param_1 + 0x110) + uVar39 * 0xe0;
      uVar30 = (ulong)(*(long *)(lVar21 + 0x48) - *(long *)(lVar21 + 0x40)) >> 3;
    }
    uVar30 = uVar30 & 0xffffffff;
    pbVar16 = local_c0[uVar39 * 3 + 1];
    pbVar24 = local_c0[uVar39 * 3];
    lVar21 = (long)pbVar16 - (long)pbVar24 >> 3;
    bVar5 = uVar30 < (ulong)(lVar21 * -0x5555555555555555);
    uVar33 = uVar30 + lVar21 * 0x5555555555555555;
    if (bVar5 || uVar33 == 0) {
      if (bVar5) {
        pbVar24 = pbVar24 + uVar30 * 0x18;
        while (pbVar20 = pbVar16, pbVar20 != pbVar24) {
          pbVar16 = pbVar20 + -0x18;
          if ((*pbVar16 & 1) != 0) {
            operator_delete(*(void **)(pbVar20 + -8));
          }
        }
        local_c0[uVar39 * 3 + 1] = pbVar24;
      }
    }
    else {
      std::__ndk1::
      vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
      ::__append((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                  *)(local_c0 + uVar39 * 3),uVar33);
    }
    lVar31 = 0;
    uVar30 = 0;
    while( true ) {
      lVar21 = *(long *)(param_1 + 0x110);
      lVar17 = *(long *)(param_1 + 0x118);
      uVar33 = (lVar17 - lVar21 >> 5) * 0x6db6db6db6db6db7;
      if ((uVar33 < uVar39 || uVar33 - uVar39 == 0) ||
         (lVar22 = lVar21 + uVar39 * 0xe0,
         ((ulong)(*(long *)(lVar22 + 0x60) - *(long *)(lVar22 + 0x58)) >> 3 & 0xffffffff) <= uVar30)
         ) break;
                    /* try { // try from 00951340 to 00951343 has its CatchHandler @ 00951da8 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((char *)(ppbVar7[uVar39 * 3] + lVar31));
      uVar30 = uVar30 + 1;
      lVar31 = lVar31 + 0x18;
    }
    lVar31 = 0;
    for (uVar33 = 0;
        (uVar30 = (lVar17 - lVar21 >> 5) * 0x6db6db6db6db6db7,
        uVar39 <= uVar30 && uVar30 - uVar39 != 0 &&
        (lVar17 = lVar21 + uVar39 * 0xe0,
        uVar33 < ((ulong)(*(long *)(lVar17 + 0x48) - *(long *)(lVar17 + 0x40)) >> 3 & 0xffffffff)));
        uVar33 = uVar33 + 1) {
                    /* try { // try from 009513b8 to 009513bb has its CatchHandler @ 00951da4 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                (local_c0[uVar39 * 3] + lVar31),
                *(basic_string **)(*(long *)(lVar21 + uVar39 * 0xe0 + 0x40) + uVar33 * 8));
      lVar21 = *(long *)(param_1 + 0x110);
      lVar17 = *(long *)(param_1 + 0x118);
      lVar31 = lVar31 + 0x18;
    }
    uVar15 = uVar15 + 1;
  } while (uVar15 <= (int)uVar30 - 1U);
  local_b0 = (undefined8 *)0x0;
  local_a8 = (undefined8 *)0x0;
  local_a0 = (undefined8 *)0x0;
  ppMVar27 = *(MaterialManager ***)(this + 0x20);
  while (ppMVar27 != (MaterialManager **)(this + 0x28)) {
    pGVar32 = (GsMaterial *)ppMVar27[4];
                    /* try { // try from 00951414 to 0095141b has its CatchHandler @ 00951d70 */
    pCVar8 = (CustomShader *)GsMaterial::getCustomShader();
    if (pCVar8 == param_1) {
                    /* try { // try from 00951424 to 009514d7 has its CatchHandler @ 00951d60 */
      ppGVar9 = (GsMaterial **)operator_new(0x1e8);
      puVar29 = local_b0;
      ppGVar9[0x3c] = (GsMaterial *)0x0;
      ppGVar9[0x39] = (GsMaterial *)0x0;
      ppGVar9[0x38] = (GsMaterial *)0x0;
      ppGVar9[0x3b] = (GsMaterial *)0x0;
      ppGVar9[0x3a] = (GsMaterial *)0x0;
      ppGVar9[0x35] = (GsMaterial *)0x0;
      ppGVar9[0x34] = (GsMaterial *)0x0;
      ppGVar9[0x37] = (GsMaterial *)0x0;
      ppGVar9[0x36] = (GsMaterial *)0x0;
      ppGVar9[0x31] = (GsMaterial *)0x0;
      ppGVar9[0x30] = (GsMaterial *)0x0;
      ppGVar9[0x33] = (GsMaterial *)0x0;
      ppGVar9[0x32] = (GsMaterial *)0x0;
      ppGVar9[0x2d] = (GsMaterial *)0x0;
      ppGVar9[0x2c] = (GsMaterial *)0x0;
      ppGVar9[0x2f] = (GsMaterial *)0x0;
      ppGVar9[0x2e] = (GsMaterial *)0x0;
      ppGVar9[0x29] = (GsMaterial *)0x0;
      ppGVar9[0x28] = (GsMaterial *)0x0;
      ppGVar9[0x2b] = (GsMaterial *)0x0;
      ppGVar9[0x2a] = (GsMaterial *)0x0;
      ppGVar9[0x25] = (GsMaterial *)0x0;
      ppGVar9[0x24] = (GsMaterial *)0x0;
      ppGVar9[0x27] = (GsMaterial *)0x0;
      ppGVar9[0x26] = (GsMaterial *)0x0;
      ppGVar9[0x21] = (GsMaterial *)0x0;
      ppGVar9[0x20] = (GsMaterial *)0x0;
      ppGVar9[0x23] = (GsMaterial *)0x0;
      ppGVar9[0x22] = (GsMaterial *)0x0;
      ppGVar9[0x1d] = (GsMaterial *)0x0;
      ppGVar9[0x1c] = (GsMaterial *)0x0;
      ppGVar9[0x1f] = (GsMaterial *)0x0;
      ppGVar9[0x1e] = (GsMaterial *)0x0;
      ppGVar9[0x19] = (GsMaterial *)0x0;
      ppGVar9[0x18] = (GsMaterial *)0x0;
      ppGVar9[0x1b] = (GsMaterial *)0x0;
      ppGVar9[0x1a] = (GsMaterial *)0x0;
      ppGVar9[0x15] = (GsMaterial *)0x0;
      ppGVar9[0x14] = (GsMaterial *)0x0;
      ppGVar9[0x17] = (GsMaterial *)0x0;
      ppGVar9[0x16] = (GsMaterial *)0x0;
      ppGVar9[0x11] = (GsMaterial *)0x0;
      ppGVar9[0x10] = (GsMaterial *)0x0;
      ppGVar9[0x13] = (GsMaterial *)0x0;
      ppGVar9[0x12] = (GsMaterial *)0x0;
      ppGVar9[0xd] = (GsMaterial *)0x0;
      ppGVar9[0xc] = (GsMaterial *)0x0;
      ppGVar9[0xf] = (GsMaterial *)0x0;
      ppGVar9[0xe] = (GsMaterial *)0x0;
      ppGVar9[9] = (GsMaterial *)0x0;
      ppGVar9[8] = (GsMaterial *)0x0;
      ppGVar9[0xb] = (GsMaterial *)0x0;
      ppGVar9[10] = (GsMaterial *)0x0;
      ppGVar9[5] = (GsMaterial *)0x0;
      ppGVar9[4] = (GsMaterial *)0x0;
      ppGVar9[7] = (GsMaterial *)0x0;
      ppGVar9[6] = (GsMaterial *)0x0;
      ppGVar9[1] = (GsMaterial *)0x0;
      *ppGVar9 = (GsMaterial *)0x0;
      ppGVar9[3] = (GsMaterial *)0x0;
      ppGVar9[2] = (GsMaterial *)0x0;
      if (local_a8 == local_a0) {
        uVar30 = (long)local_a8 - (long)local_b0;
        uVar39 = ((long)uVar30 >> 3) + 1;
        if (uVar39 >> 0x3d != 0) {
                    /* try { // try from 00951d0c to 00951d1f has its CatchHandler @ 00951d58 */
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        if (uVar39 <= (ulong)((long)uVar30 >> 2)) {
          uVar39 = (long)uVar30 >> 2;
        }
        if (0x7ffffffffffffff7 < uVar30) {
          uVar39 = 0x1fffffffffffffff;
        }
        if (uVar39 == 0) {
          puVar10 = (undefined8 *)0x0;
        }
        else {
          if (uVar39 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
          }
          puVar10 = (undefined8 *)operator_new(uVar39 << 3);
        }
        puVar1 = puVar10 + ((long)uVar30 >> 3);
        *puVar1 = ppGVar9;
        if (0 < (long)uVar30) {
          memcpy(puVar10,puVar29,uVar30);
        }
        local_a0 = puVar10 + uVar39;
        local_b0 = puVar10;
        local_a8 = puVar1 + 1;
        if (puVar29 != (undefined8 *)0x0) {
          operator_delete(puVar29);
        }
      }
      else {
        *local_a8 = ppGVar9;
        local_a8 = local_a8 + 1;
      }
      *ppGVar9 = pGVar32;
      ppGVar9[4] = (GsMaterial *)0x0;
      ppGVar9[3] = (GsMaterial *)0x0;
      ppGVar9[6] = (GsMaterial *)0x0;
      ppGVar9[5] = (GsMaterial *)0x0;
      ppGVar9[8] = (GsMaterial *)0x0;
      ppGVar9[7] = (GsMaterial *)0x0;
      ppGVar9[10] = (GsMaterial *)0x0;
      ppGVar9[9] = (GsMaterial *)0x0;
      ppGVar9[0xc] = (GsMaterial *)0x0;
      ppGVar9[0xb] = (GsMaterial *)0x0;
      ppGVar9[0xe] = (GsMaterial *)0x0;
      ppGVar9[0xd] = (GsMaterial *)0x0;
      ppGVar9[0x10] = (GsMaterial *)0x0;
      ppGVar9[0xf] = (GsMaterial *)0x0;
      ppGVar9[0x12] = (GsMaterial *)0x0;
      ppGVar9[0x11] = (GsMaterial *)0x0;
      ppGVar9[0x14] = (GsMaterial *)0x0;
      ppGVar9[0x13] = (GsMaterial *)0x0;
      ppGVar9[0x16] = (GsMaterial *)0x0;
      ppGVar9[0x15] = (GsMaterial *)0x0;
      ppGVar9[0x18] = (GsMaterial *)0x0;
      ppGVar9[0x17] = (GsMaterial *)0x0;
      ppGVar9[0x1a] = (GsMaterial *)0x0;
      ppGVar9[0x19] = (GsMaterial *)0x0;
      ppGVar9[0x1c] = (GsMaterial *)0x0;
      ppGVar9[0x1b] = (GsMaterial *)0x0;
      ppGVar9[0x1e] = (GsMaterial *)0x0;
      ppGVar9[0x1d] = (GsMaterial *)0x0;
      ppGVar9[0x20] = (GsMaterial *)0x0;
      ppGVar9[0x1f] = (GsMaterial *)0x0;
      ppGVar9[2] = (GsMaterial *)0x0;
      ppGVar9[1] = (GsMaterial *)0x0;
      ppGVar9[0x22] = (GsMaterial *)0x0;
      ppGVar9[0x21] = (GsMaterial *)0x0;
      ppGVar9[0x24] = (GsMaterial *)0x0;
      ppGVar9[0x23] = (GsMaterial *)0x0;
      ppGVar9[0x26] = (GsMaterial *)0x0;
      ppGVar9[0x25] = (GsMaterial *)0x0;
      ppGVar9[0x28] = (GsMaterial *)0x0;
      ppGVar9[0x27] = (GsMaterial *)0x0;
      ppGVar9[0x2a] = (GsMaterial *)0x0;
      ppGVar9[0x29] = (GsMaterial *)0x0;
      ppGVar9[0x2c] = (GsMaterial *)0x0;
      ppGVar9[0x2b] = (GsMaterial *)0x0;
      ppGVar9[0x2e] = (GsMaterial *)0x0;
      ppGVar9[0x2d] = (GsMaterial *)0x0;
      ppGVar9[0x30] = (GsMaterial *)0x0;
      ppGVar9[0x2f] = (GsMaterial *)0x0;
      ppGVar9[0x32] = (GsMaterial *)0x0;
      ppGVar9[0x31] = (GsMaterial *)0x0;
      ppGVar9[0x34] = (GsMaterial *)0x0;
      ppGVar9[0x33] = (GsMaterial *)0x0;
      ppGVar9[0x36] = (GsMaterial *)0x0;
      ppGVar9[0x35] = (GsMaterial *)0x0;
      ppGVar9[0x38] = (GsMaterial *)0x0;
      ppGVar9[0x37] = (GsMaterial *)0x0;
      uVar30 = (ulong)*(uint *)(pGVar32 + 0x88);
      *(uint *)(ppGVar9 + 0x39) = *(uint *)(pGVar32 + 0x88);
                    /* try { // try from 009515ac to 009515af has its CatchHandler @ 00951d68 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((char *)(ppGVar9 + 0x3a));
      uVar39 = 0;
      while( true ) {
        lVar21 = *(long *)(param_1 + 0x110);
        lVar31 = *(long *)(param_1 + 0x118);
        uVar33 = (lVar31 - lVar21 >> 5) * 0x6db6db6db6db6db7;
        if ((uVar33 < uVar30 || uVar33 - uVar30 == 0) ||
           (lVar17 = lVar21 + uVar30 * 0xe0,
           ((ulong)(*(long *)(lVar17 + 0x60) - *(long *)(lVar17 + 0x58)) >> 3 & 0xffffffff) <=
           uVar39)) break;
        if (*(long *)(pGVar32 + 0x70) == 0) {
          ppGVar9[uVar39 + 1] = (GsMaterial *)0x0;
          uVar39 = uVar39 + 1;
        }
        else {
          pGVar18 = *(GsMaterial **)(*(long *)(pGVar32 + 0x70) + uVar39 * 8);
          ppGVar9[uVar39 + 1] = pGVar18;
          if (pGVar18 != (GsMaterial *)0x0) {
            FUN_00f276d0(1,pGVar18 + 8);
          }
          uVar39 = uVar39 + 1;
        }
      }
      ppGVar9 = ppGVar9 + 0x11;
      for (uVar39 = 0;
          (uVar33 = (lVar31 - lVar21 >> 5) * 0x6db6db6db6db6db7,
          uVar30 <= uVar33 && uVar33 - uVar30 != 0 &&
          (lVar21 = lVar21 + uVar30 * 0xe0,
          uVar39 < ((ulong)(*(long *)(lVar21 + 0x48) - *(long *)(lVar21 + 0x40)) >> 3 & 0xffffffff))
          ); uVar39 = uVar39 + 1) {
                    /* try { // try from 00951678 to 00951687 has its CatchHandler @ 00951d7c */
        GsMaterial::getCustomParameter(pGVar32,(uint)uVar39,(float *)ppGVar9);
        lVar21 = *(long *)(param_1 + 0x110);
        lVar31 = *(long *)(param_1 + 0x118);
        ppGVar9 = ppGVar9 + 2;
      }
                    /* try { // try from 00951698 to 009516a7 has its CatchHandler @ 00951d68 */
      GsMaterial::setCustomShader(pGVar32,(CustomShader *)0x0,0);
    }
    ppMVar19 = (MaterialManager **)ppMVar27[1];
    if ((MaterialManager **)ppMVar27[1] == (MaterialManager **)0x0) {
      ppMVar19 = ppMVar27 + 2;
      bVar5 = (MaterialManager **)*(MaterialManager **)*ppMVar19 != ppMVar27;
      ppMVar27 = (MaterialManager **)*ppMVar19;
      if (bVar5) {
        do {
          pMVar23 = *ppMVar19;
          ppMVar19 = (MaterialManager **)(pMVar23 + 0x10);
          ppMVar27 = (MaterialManager **)*ppMVar19;
        } while (*ppMVar27 != pMVar23);
      }
    }
    else {
      do {
        ppMVar27 = ppMVar19;
        ppMVar19 = (MaterialManager **)*ppMVar27;
      } while ((MaterialManager **)*ppMVar27 != (MaterialManager **)0x0);
    }
  }
                    /* try { // try from 009516f0 to 00951733 has its CatchHandler @ 00951d54 */
  CustomShader::load();
  puVar10 = local_a8;
  puVar29 = local_b0;
  pvVar34 = *(void **)param_2;
  sVar37 = *(long *)(param_2 + 8) - (long)pvVar34;
  uVar39 = ((long)sVar37 >> 3) + ((long)local_a8 - (long)local_b0 >> 3);
  if ((ulong)(*(long *)(param_2 + 0x10) - (long)pvVar34 >> 3) < uVar39) {
    if (uVar39 >> 0x3d != 0) {
                    /* try { // try from 00951d20 to 00951d2b has its CatchHandler @ 00951d54 */
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pvVar11 = operator_new(uVar39 * 8);
    if (0 < (long)sVar37) {
      memcpy(pvVar11,pvVar34,sVar37);
    }
    *(void **)param_2 = pvVar11;
    *(void **)(param_2 + 8) = (void *)((long)pvVar11 + ((long)sVar37 >> 3) * 8);
    *(void **)(param_2 + 0x10) = (void *)((long)pvVar11 + uVar39 * 8);
    if (pvVar34 != (void *)0x0) {
      operator_delete(pvVar34);
    }
  }
  if (puVar10 != puVar29) {
    uVar39 = 0;
    do {
      ppRVar38 = (Resource **)puVar29[uVar39];
      ppGVar9 = *(GsMaterial ***)(param_2 + 8);
      pGVar32 = (GsMaterial *)*ppRVar38;
      if (ppGVar9 == *(GsMaterial ***)(param_2 + 0x10)) {
        pvVar34 = *(void **)param_2;
        uVar33 = (long)ppGVar9 - (long)pvVar34;
        uVar30 = ((long)uVar33 >> 3) + 1;
        if (uVar30 >> 0x3d != 0) {
                    /* try { // try from 00951cf8 to 00951d0b has its CatchHandler @ 00951d64 */
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        if (uVar30 <= (ulong)((long)uVar33 >> 2)) {
          uVar30 = (long)uVar33 >> 2;
        }
        if (0x7ffffffffffffff7 < uVar33) {
          uVar30 = 0x1fffffffffffffff;
        }
        if (uVar30 == 0) {
          pvVar11 = (void *)0x0;
        }
        else {
          if (uVar30 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
          }
                    /* try { // try from 00951800 to 00951803 has its CatchHandler @ 00951d5c */
          pvVar11 = operator_new(uVar30 << 3);
        }
        ppGVar9 = (GsMaterial **)((long)pvVar11 + ((long)uVar33 >> 3) * 8);
        *ppGVar9 = pGVar32;
        if (0 < (long)uVar33) {
          memcpy(pvVar11,pvVar34,uVar33);
        }
        *(void **)param_2 = pvVar11;
        *(GsMaterial ***)(param_2 + 8) = ppGVar9 + 1;
        *(void **)(param_2 + 0x10) = (void *)((long)pvVar11 + uVar30 * 8);
        if (pvVar34 != (void *)0x0) {
          operator_delete(pvVar34);
        }
      }
      else {
        *ppGVar9 = pGVar32;
        *(GsMaterial ***)(param_2 + 8) = ppGVar9 + 1;
      }
      bVar2 = *(byte *)(ppRVar38 + 0x3a);
      pRVar25 = (Resource *)(ulong)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        pRVar25 = ppRVar38[0x3b];
      }
      if (pRVar25 != (Resource *)0x0) {
        lVar21 = *(long *)(param_1 + 0x110);
        pRVar25 = ppRVar38[0x3c];
        if ((bVar2 & 1) == 0) {
          pRVar25 = (Resource *)((long)ppRVar38 + 0x1d1);
        }
        uVar30 = (*(long *)(param_1 + 0x118) - lVar21 >> 5) * 0x6db6db6db6db6db7;
        if (1 < uVar30) {
          uVar33 = 1;
          do {
            iVar6 = strcmp(*(char **)(lVar21 + uVar33 * 0xe0),(char *)pRVar25);
            if (iVar6 == 0) goto LAB_009518c0;
            uVar33 = (ulong)((int)uVar33 + 1);
          } while (uVar33 <= uVar30 && uVar30 - uVar33 != 0);
        }
      }
      uVar33 = 0;
LAB_009518c0:
                    /* try { // try from 009518c0 to 009518cf has its CatchHandler @ 00951d6c */
      uVar15 = (uint)uVar33;
      GsMaterial::setCustomShader(pGVar32,param_1,uVar15);
      lVar21 = *(long *)(param_1 + 0x110);
      uVar30 = (*(long *)(param_1 + 0x118) - lVar21 >> 5) * 0x6db6db6db6db6db7;
      if (uVar30 < uVar33 || uVar30 - uVar33 == 0) {
        local_d8 = 0;
      }
      else {
        lVar31 = lVar21 + uVar33 * 0xe0;
        uVar30 = *(long *)(lVar31 + 0x48) - *(long *)(lVar31 + 0x40);
        local_d8 = (ulong)(*(long *)(lVar31 + 0x60) - *(long *)(lVar31 + 0x58)) >> 3;
        if ((int)(uVar30 >> 3) != 0) {
                    /* try { // try from 0095193c to 00951947 has its CatchHandler @ 00951d78 */
          for (lVar31 = 0;
              GsMaterial::setCustomParameter
                        (pGVar32,(uint)lVar31,
                         (float *)(*(long *)(*(long *)(lVar21 + uVar33 * 0xe0 + 0x40) + lVar31 * 8)
                                  + 0x30)), (uVar30 >> 3 & 0xffffffff) - 1 != lVar31;
              lVar31 = lVar31 + 1) {
            lVar21 = *(long *)(param_1 + 0x110);
          }
        }
      }
      ppbVar28 = local_80;
      ppbVar7 = local_98;
      pbVar16 = local_80[(ulong)*(uint *)(ppRVar38 + 0x39) * 3];
      uVar30 = ((long)(local_80 + (ulong)*(uint *)(ppRVar38 + 0x39) * 3)[1] - (long)pbVar16 >> 3) *
               -0x5555555555555555;
      pbVar24 = local_98[(ulong)*(uint *)(ppRVar38 + 0x39) * 3];
      pbVar20 = (local_98 + (ulong)*(uint *)(ppRVar38 + 0x39) * 3)[1];
      if ((int)uVar30 != 0) {
        lVar21 = 0;
        ppRVar36 = ppRVar38;
        while( true ) {
          ppRVar36 = ppRVar36 + 1;
          pbVar16 = pbVar16 + lVar21;
          pbVar26 = *(byte **)(pbVar16 + 0x10);
          if ((*pbVar16 & 1) == 0) {
            pbVar26 = pbVar16 + 1;
          }
                    /* try { // try from 009519d4 to 009519f7 has its CatchHandler @ 00951d88 */
          uVar35 = CustomShader::getTextureIndex(param_1,uVar15,(char *)pbVar26,&local_b4);
          if ((uVar35 & 1) != 0) {
            GsMaterial::setCustomTexture(pGVar32,local_b4,(Texture *)*ppRVar36);
          }
          if ((uVar30 & 0xffffffff) * 0x18 + -0x18 == lVar21) break;
          lVar21 = lVar21 + 0x18;
          pbVar16 = ppbVar28[(ulong)*(uint *)(ppRVar38 + 0x39) * 3];
        }
      }
      uVar35 = ((long)pbVar20 - (long)pbVar24 >> 3) * -0x5555555555555555;
      if ((int)uVar35 != 0) {
        lVar21 = 0;
        ppRVar36 = ppRVar38 + 0x11;
        do {
          pbVar16 = ppbVar7[(ulong)*(uint *)(ppRVar38 + 0x39) * 3] + lVar21;
          pbVar24 = *(byte **)(pbVar16 + 0x10);
          if ((*pbVar16 & 1) == 0) {
            pbVar24 = pbVar16 + 1;
          }
                    /* try { // try from 00951a88 to 00951aab has its CatchHandler @ 00951d84 */
          uVar12 = CustomShader::getParameterIndex(param_1,uVar15,(char *)pbVar24,&local_b4);
          if ((uVar12 & 1) != 0) {
            GsMaterial::setCustomParameter(pGVar32,local_b4,(float *)ppRVar36);
          }
          ppRVar36 = ppRVar36 + 2;
          lVar21 = lVar21 + 0x18;
        } while (((uVar35 & 0xffffffff) + (uVar35 & 0xffffffff) * 2) * 8 - lVar21 != 0);
      }
      if ((int)local_d8 != 0) {
        uVar35 = 0;
        do {
          if ((*(long *)(pGVar32 + 0x70) == 0) ||
             (*(long *)(*(long *)(pGVar32 + 0x70) + uVar35 * 8) == 0)) {
            lVar21 = *(long *)(*(long *)(*(long *)(param_1 + 0x110) + uVar33 * 0xe0 + 0x58) +
                              uVar35 * 8);
            bVar2 = *(byte *)(lVar21 + 0x18);
            uVar12 = (ulong)(bVar2 >> 1);
            if ((bVar2 & 1) != 0) {
              uVar12 = *(ulong *)(lVar21 + 0x20);
            }
            if (uVar12 != 0) {
              if ((bVar2 & 1) == 0) {
                pcVar13 = (char *)(lVar21 + 0x19);
              }
              else {
                pcVar13 = *(char **)(lVar21 + 0x28);
                if (pcVar13 == (char *)0x0) goto LAB_00951ac4;
              }
                    /* try { // try from 00951b28 to 00951b4f has its CatchHandler @ 00951d80 */
              pRVar25 = (Resource *)
                        TextureUtil::loadMaterialTexture(pcVar13,*(bool *)(lVar21 + 0x30),1);
              GsMaterial::setCustomTexture(pGVar32,(uint)uVar35,(Texture *)pRVar25);
              pRVar14 = (ResourceManager *)ResourceManager::getInstance();
              ResourceManager::release(pRVar14,pRVar25);
            }
          }
LAB_00951ac4:
          uVar35 = uVar35 + 1;
        } while ((local_d8 & 0xffffffff) != uVar35);
      }
      if ((int)uVar30 != 0) {
        uVar30 = uVar30 & 0xffffffff;
        do {
          ppRVar38 = ppRVar38 + 1;
                    /* try { // try from 00951b68 to 00951b73 has its CatchHandler @ 00951d8c */
          pRVar14 = (ResourceManager *)ResourceManager::getInstance();
          ResourceManager::release(pRVar14,*ppRVar38);
          uVar30 = uVar30 - 1;
        } while (uVar30 != 0);
      }
      uVar39 = (ulong)((int)uVar39 + 1);
      puVar29 = local_b0;
    } while (uVar39 < (ulong)((long)local_a8 - (long)local_b0 >> 3));
  }
  iVar6 = FUN_00f27700(0xffffffff,param_1 + 8);
  if (iVar6 < 2) {
                    /* try { // try from 00951ba0 to 00951baf has its CatchHandler @ 00951d54 */
    (**(code **)(*(long *)param_1 + 0x10))(param_1);
  }
  Mutex::leaveCriticalSection();
  if (local_b0 != (undefined8 *)0x0) {
    operator_delete(local_b0);
  }
  ppbVar7 = local_98;
  ppbVar28 = local_90;
  if (local_98 != (byte **)0x0) {
    while (ppbVar4 = ppbVar28, ppbVar4 != ppbVar7) {
      ppbVar28 = ppbVar4 + -3;
      pbVar16 = *ppbVar28;
      if (pbVar16 != (byte *)0x0) {
        pbVar20 = ppbVar4[-2];
        pbVar24 = pbVar16;
        if (pbVar20 != pbVar16) {
          do {
            pbVar24 = pbVar20 + -0x18;
            if ((*pbVar24 & 1) != 0) {
              operator_delete(*(void **)(pbVar20 + -8));
            }
            pbVar20 = pbVar24;
          } while (pbVar24 != pbVar16);
          pbVar24 = *ppbVar28;
        }
        ppbVar4[-2] = pbVar16;
        operator_delete(pbVar24);
      }
    }
    local_90 = ppbVar7;
    operator_delete(ppbVar7);
  }
  ppbVar7 = local_80;
  ppbVar28 = local_78;
  if (local_80 != (byte **)0x0) {
    while (ppbVar4 = ppbVar28, ppbVar4 != ppbVar7) {
      ppbVar28 = ppbVar4 + -3;
      pbVar16 = *ppbVar28;
      if (pbVar16 != (byte *)0x0) {
        pbVar20 = ppbVar4[-2];
        pbVar24 = pbVar16;
        if (pbVar20 != pbVar16) {
          do {
            pbVar24 = pbVar20 + -0x18;
            if ((*pbVar24 & 1) != 0) {
              operator_delete(*(void **)(pbVar20 + -8));
            }
            pbVar20 = pbVar24;
          } while (pbVar24 != pbVar16);
          pbVar24 = *ppbVar28;
        }
        ppbVar4[-2] = pbVar16;
        operator_delete(pbVar24);
      }
    }
    local_78 = ppbVar7;
    operator_delete(ppbVar7);
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


