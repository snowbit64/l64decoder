// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: saveToDesc
// Entry Point: 00a71814
// Size: 604 bytes
// Signature: undefined __thiscall saveToDesc(TerrainFillDataPlane * this, TerrainLayerTransformGroupDesc * param_1)


/* WARNING: Removing unreachable block (ram,0x00a719b0) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* TerrainFillDataPlane::saveToDesc(TerrainLayerTransformGroupDesc&) */

void __thiscall
TerrainFillDataPlane::saveToDesc(TerrainFillDataPlane *this,TerrainLayerTransformGroupDesc *param_1)

{
  byte *pbVar1;
  undefined4 uVar2;
  long lVar3;
  size_t __n;
  void *__dest;
  ulong *puVar4;
  byte *__s;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 local_b8;
  size_t sStack_b0;
  void *local_a8;
  ulong local_a0;
  undefined4 local_98;
  __tree_node **local_90;
  __tree_node *local_88 [2];
  long local_78;
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  *(undefined8 *)(param_1 + 0x284) = *(undefined8 *)(this + 0x88);
  *(undefined4 *)(param_1 + 0x28c) = *(undefined4 *)(this + 0x90);
  lVar5 = *(long *)(this + 0x98);
  if (*(long *)(this + 0xa0) != lVar5) {
    uVar7 = 0;
    do {
      pbVar1 = (byte *)(lVar5 + uVar7 * 0x40);
      __s = *(byte **)(pbVar1 + 0x10);
      uVar8 = *(ulong *)(pbVar1 + 0x18);
      uVar2 = *(undefined4 *)(pbVar1 + 0x20);
      if ((*pbVar1 & 1) == 0) {
        __s = pbVar1 + 1;
      }
      __n = strlen((char *)__s);
      if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_length_error();
      }
      if (__n < 0x17) {
        local_b8 = CONCAT71(local_b8._1_7_,(char)((int)__n << 1));
        __dest = (void *)((ulong)&local_b8 | 1);
        if (__n != 0) goto LAB_00a71934;
      }
      else {
        uVar6 = __n + 0x10 & 0xfffffffffffffff0;
        __dest = operator_new(uVar6);
        local_b8 = uVar6 | 1;
        sStack_b0 = __n;
        local_a8 = __dest;
LAB_00a71934:
        memcpy(__dest,__s,__n);
      }
      *(undefined *)((long)__dest + __n) = 0;
      puVar4 = *(ulong **)(param_1 + 0x2b0);
      local_88[0] = (__tree_node *)0x0;
      local_a0 = uVar8;
      local_98 = uVar2;
      local_90 = local_88;
      if (puVar4 < *(ulong **)(param_1 + 0x2b8)) {
        puVar4[2] = (ulong)local_a8;
        puVar4[1] = sStack_b0;
        *puVar4 = local_b8;
        sStack_b0 = 0;
        local_a8 = (void *)0x0;
        local_b8 = 0;
        puVar4[3] = uVar8;
        *(undefined4 *)(puVar4 + 4) = uVar2;
        puVar4[5] = (ulong)local_88;
        puVar4[6] = 0;
        puVar4[7] = 0;
        puVar4[5] = (ulong)(puVar4 + 6);
        local_88[0] = (__tree_node *)0x0;
        *(ulong **)(param_1 + 0x2b0) = puVar4 + 8;
      }
      else {
                    /* try { // try from 00a719c4 to 00a719cf has its CatchHandler @ 00a71a70 */
        std::__ndk1::
        vector<TerrainTransformGroupDesc::LayerGroupDesc,std::__ndk1::allocator<TerrainTransformGroupDesc::LayerGroupDesc>>
        ::__push_back_slow_path<TerrainTransformGroupDesc::LayerGroupDesc>
                  ((vector<TerrainTransformGroupDesc::LayerGroupDesc,std::__ndk1::allocator<TerrainTransformGroupDesc::LayerGroupDesc>>
                    *)(param_1 + 0x2a8),(LayerGroupDesc *)&local_b8);
      }
      std::__ndk1::
      __tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
      ::destroy((__tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                 *)&local_90,local_88[0]);
      if ((local_b8 & 1) != 0) {
        operator_delete(local_a8);
      }
      lVar5 = lVar5 + uVar7 * 0x40;
      if (*(long *)(param_1 + 0x2b0) + -0x40 != lVar5) {
        std::__ndk1::
        __tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
        ::
        __assign_multi<std::__ndk1::__tree_const_iterator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__tree_node<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,void*>*,long>>
                  ((__tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                    *)(*(long *)(param_1 + 0x2b0) + -0x18),
                   (__tree_const_iterator)*(undefined8 *)(lVar5 + 0x28),(int)lVar5 + 0x30);
      }
      lVar5 = *(long *)(this + 0x98);
      uVar7 = (ulong)((int)uVar7 + 1);
    } while (uVar7 < (ulong)(*(long *)(this + 0xa0) - lVar5 >> 6));
  }
  if (*(long *)(lVar3 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


