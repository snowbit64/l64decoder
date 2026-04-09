// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addStructLayouts
// Entry Point: 00bf509c
// Size: 1164 bytes
// Signature: undefined __thiscall addStructLayouts(CompiledShaderArchive * this, uint param_1, ShaderStructLayout * param_2, uint * param_3)


/* CompiledShaderArchive::addStructLayouts(unsigned int, ShaderStructLayout const*, unsigned int&)
    */

void __thiscall
CompiledShaderArchive::addStructLayouts
          (CompiledShaderArchive *this,uint param_1,ShaderStructLayout *param_2,uint *param_3)

{
  ShaderStructLayout *pSVar1;
  byte *pbVar2;
  CompiledShaderArchive CVar3;
  uint uVar4;
  long lVar5;
  bool bVar6;
  pair pVar7;
  int iVar8;
  ulong *puVar9;
  uchar *__src;
  ulong uVar10;
  undefined8 *puVar11;
  ShaderStructLayout *pSVar12;
  byte *pbVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  uint uVar17;
  ulong uVar18;
  uchar *puVar19;
  long lVar20;
  uint local_184;
  undefined8 local_180;
  ulong *puStack_178;
  undefined8 local_170;
  uint local_168;
  char local_164;
  undefined local_163;
  undefined local_162;
  undefined uStack_161;
  undefined2 uStack_160;
  undefined5 uStack_15e;
  ulong local_158;
  ulong *puStack_150;
  MD5Hash aMStack_148 [16];
  undefined auStack_138 [72];
  ulong local_f0;
  ulong uStack_e8;
  undefined *local_e0;
  undefined auStack_d8 [72];
  ulong local_90;
  ulong uStack_88;
  undefined *local_80;
  long local_78;
  
  lVar5 = tpidr_el0;
  local_78 = *(long *)(lVar5 + 0x28);
  local_184 = param_1;
  if (param_1 < 0x100) {
    MD5Hash::MD5Hash(aMStack_148);
                    /* try { // try from 00bf50ec to 00bf50fb has its CatchHandler @ 00bf5538 */
    MD5Hash::add(aMStack_148,(uchar *)&local_184,4);
    if (local_184 != 0) {
      uVar15 = 0;
      do {
        pSVar1 = param_2 + uVar15 * 0x40;
        pSVar12 = *(ShaderStructLayout **)(pSVar1 + 0x10);
        bVar6 = ((byte)*pSVar1 & 1) == 0;
        if (bVar6) {
          pSVar12 = pSVar1 + 1;
        }
        uVar4 = (uint)((byte)*pSVar1 >> 1);
        if (!bVar6) {
          uVar4 = *(uint *)(pSVar1 + 8);
        }
                    /* try { // try from 00bf5144 to 00bf516f has its CatchHandler @ 00bf5578 */
        MD5Hash::add(aMStack_148,(uchar *)pSVar12,uVar4 + 1);
        MD5Hash::add(aMStack_148,(uchar *)(pSVar1 + 0x18),1);
        MD5Hash::add(aMStack_148,(uchar *)(param_2 + uVar15 * 0x40 + 0x19),1);
        local_180 = CONCAT44(local_180._4_4_,
                             (int)((ulong)(*(long *)(param_2 + uVar15 * 0x40 + 0x28) -
                                          *(long *)(param_2 + uVar15 * 0x40 + 0x20)) >> 5));
                    /* try { // try from 00bf5180 to 00bf518f has its CatchHandler @ 00bf5574 */
        MD5Hash::add(aMStack_148,(uchar *)&local_180,4);
        if ((int)local_180 != 0) {
          lVar16 = 0;
          uVar18 = 0;
          do {
            lVar20 = *(long *)(param_2 + uVar15 * 0x40 + 0x20);
            pbVar2 = (byte *)(lVar20 + lVar16);
            pbVar13 = *(byte **)(pbVar2 + 0x10);
            bVar6 = (*pbVar2 & 1) == 0;
            if (bVar6) {
              pbVar13 = pbVar2 + 1;
            }
            uVar4 = (uint)(*pbVar2 >> 1);
            if (!bVar6) {
              uVar4 = *(uint *)(pbVar2 + 8);
            }
                    /* try { // try from 00bf51c8 to 00bf5227 has its CatchHandler @ 00bf557c */
            MD5Hash::add(aMStack_148,pbVar13,uVar4 + 1);
            MD5Hash::add(aMStack_148,pbVar2 + 0x18,2);
            MD5Hash::add(aMStack_148,(uchar *)(lVar20 + lVar16 + 0x1a),1);
            MD5Hash::add(aMStack_148,(uchar *)(lVar20 + lVar16 + 0x1b),1);
            MD5Hash::add(aMStack_148,(uchar *)(lVar20 + lVar16 + 0x1c),2);
            MD5Hash::add(aMStack_148,(uchar *)(lVar20 + lVar16 + 0x1e),1);
            uVar18 = uVar18 + 1;
            lVar16 = lVar16 + 0x20;
          } while (uVar18 < (local_180 & 0xffffffff));
        }
        uVar15 = uVar15 + 1;
      } while (uVar15 < local_184);
    }
    lVar16 = *(long *)(this + 0x30);
    lVar20 = *(long *)(this + 0x38);
                    /* try { // try from 00bf5248 to 00bf5253 has its CatchHandler @ 00bf5534 */
    MD5Hash::getMD5Hash(aMStack_148,(uchar *)&local_158);
    uVar4 = (int)((ulong)(lVar20 - lVar16) >> 3) * -0x33333333;
    puStack_178 = puStack_150;
    local_180 = local_158;
    local_170 = (uchar *)CONCAT44(local_170._4_4_,uVar4);
                    /* try { // try from 00bf5278 to 00bf5283 has its CatchHandler @ 00bf5530 */
    puVar11 = &local_180;
    pVar7 = std::__ndk1::
            __tree<std::__ndk1::__value_type<CompiledShaderArchive::StructLayoutsHash,unsigned_int>,std::__ndk1::__map_value_compare<CompiledShaderArchive::StructLayoutsHash,std::__ndk1::__value_type<CompiledShaderArchive::StructLayoutsHash,unsigned_int>,std::__ndk1::less<CompiledShaderArchive::StructLayoutsHash>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<CompiledShaderArchive::StructLayoutsHash,unsigned_int>>>
            ::
            __emplace_unique_key_args<CompiledShaderArchive::StructLayoutsHash,std::__ndk1::pair<CompiledShaderArchive::StructLayoutsHash,unsigned_int>>
                      ((__tree<std::__ndk1::__value_type<CompiledShaderArchive::StructLayoutsHash,unsigned_int>,std::__ndk1::__map_value_compare<CompiledShaderArchive::StructLayoutsHash,std::__ndk1::__value_type<CompiledShaderArchive::StructLayoutsHash,unsigned_int>,std::__ndk1::less<CompiledShaderArchive::StructLayoutsHash>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<CompiledShaderArchive::StructLayoutsHash,unsigned_int>>>
                        *)(this + 0xd0),(StructLayoutsHash *)puVar11,(pair *)&local_180);
    if (((ulong)puVar11 & 0xff) == 0) {
      *param_3 = *(uint *)((ulong)pVar7 + 0x2c);
    }
    else {
      uVar15 = (ulong)local_184;
      local_170 = (uchar *)0x0;
      local_168 = 0;
      local_164 = '\0';
      local_163 = 0;
      local_162 = 0;
      uStack_161 = 0;
      uStack_160 = 0;
      uStack_15e = 0;
      local_180 = CONCAT44(local_180._4_4_,local_184);
      if (local_184 == 0) {
        CVar3 = this[0x104];
        uVar14 = 0;
      }
      else {
                    /* try { // try from 00bf52a8 to 00bf52ab has its CatchHandler @ 00bf553c */
        puVar9 = (ulong *)operator_new__(uVar15 << 6 | 8);
        lVar16 = 0;
        *puVar9 = uVar15;
        do {
                    /* try { // try from 00bf52cc to 00bf52cf has its CatchHandler @ 00bf5548 */
          ShaderStructLayout::ShaderStructLayout((ShaderStructLayout *)((long)puVar9 + lVar16 + 8));
          lVar16 = lVar16 + 0x40;
        } while (uVar15 * 0x40 - lVar16 != 0);
        puStack_178 = puVar9 + 1;
        if (local_184 != 0) {
          lVar16 = 0x20;
          uVar15 = 1;
          while( true ) {
            puVar9 = puStack_178;
                    /* try { // try from 00bf5300 to 00bf5323 has its CatchHandler @ 00bf5570 */
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       *)((long)puStack_178 + lVar16 + -0x20),
                      (basic_string *)(param_2 + lVar16 + -0x20));
            *(undefined2 *)((long)puVar9 + lVar16 + -8) = *(undefined2 *)(param_2 + lVar16 + -8);
            if (puVar9 != (ulong *)param_2) {
              std::__ndk1::
              vector<ShaderStructLayout::Field,std::__ndk1::allocator<ShaderStructLayout::Field>>::
              assign<ShaderStructLayout::Field*>
                        ((vector<ShaderStructLayout::Field,std::__ndk1::allocator<ShaderStructLayout::Field>>
                          *)((long)puVar9 + lVar16),*(Field **)(param_2 + lVar16),
                         *(Field **)((long)(param_2 + lVar16) + 8));
            }
            *(undefined4 *)((long)puVar9 + lVar16 + 0x18) = *(undefined4 *)(param_2 + lVar16 + 0x18)
            ;
            if (local_184 <= uVar15) break;
            lVar16 = lVar16 + 0x40;
            uVar15 = uVar15 + 1;
          }
        }
        CVar3 = this[0x104];
        uVar14 = local_184;
      }
      if (CVar3 != (CompiledShaderArchive)0x0) {
        if (uVar14 == 0) {
          uVar14 = 1;
          uVar17 = 0;
        }
        else {
          uVar15 = 0;
          uVar14 = 1;
          do {
                    /* try { // try from 00bf538c to 00bf5393 has its CatchHandler @ 00bf5544 */
            iVar8 = ShaderStructLayout::getSerializeSize();
            uVar14 = iVar8 + uVar14;
            uVar15 = uVar15 + 1;
            uVar17 = local_184;
          } while (uVar15 < local_184);
        }
        uVar15 = (ulong)uVar14;
                    /* try { // try from 00bf53bc to 00bf53c3 has its CatchHandler @ 00bf552c */
        __src = (uchar *)operator_new__(uVar15);
        *__src = (uchar)uVar17;
        if (uVar17 != 0) {
          uVar18 = 0;
          puVar19 = __src + 1;
          do {
                    /* try { // try from 00bf53d8 to 00bf53e3 has its CatchHandler @ 00bf5540 */
            uVar10 = ShaderStructLayout::serialize(param_2,puVar19);
            puVar19 = puVar19 + (uVar10 & 0xffffffff);
            uVar18 = uVar18 + 1;
            param_2 = param_2 + 0x40;
          } while (uVar18 < local_184);
        }
        local_170 = (uchar *)0x0;
        local_168 = 0;
        local_164 = '\0';
        if (uVar14 != 0) {
                    /* try { // try from 00bf541c to 00bf544b has its CatchHandler @ 00bf5528 */
          uVar18 = LZMACompressionUtil::compressIfSmaller
                             (__src,uVar14,(uchar **)&local_170,&local_168);
          if ((uVar18 & 1) == 0) {
            local_170 = (uchar *)operator_new__(uVar15);
            memcpy(local_170,__src,uVar15);
            local_168 = uVar14;
          }
          else {
            local_163 = 0;
            local_162 = (undefined)uVar14;
            uStack_161 = (undefined)(uVar14 >> 8);
            uStack_160 = (undefined2)(uVar14 >> 0x10);
            local_164 = local_164 + '\x01';
          }
        }
        operator_delete__(__src);
      }
                    /* try { // try from 00bf5468 to 00bf5473 has its CatchHandler @ 00bf553c */
      FUN_00bf6974(this + 0x30,&local_180);
      *param_3 = uVar4;
    }
    if (uStack_88 <= local_90) {
      local_90 = uStack_88;
    }
    if (local_80 == auStack_d8) {
      for (; local_90 != 0; local_90 = local_90 - 1) {
        *(undefined4 *)(local_80 + local_90 * 4 + -4) = 0;
      }
    }
    if (uStack_e8 <= local_f0) {
      local_f0 = uStack_e8;
    }
    if (local_e0 == auStack_138) {
      for (; local_f0 != 0; local_f0 = local_f0 - 1) {
        *(undefined4 *)(local_e0 + local_f0 * 4 + -4) = 0;
      }
    }
  }
  if (*(long *)(lVar5 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_1 < 0x100);
  }
  return;
}


