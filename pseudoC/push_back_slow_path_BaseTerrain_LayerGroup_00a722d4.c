// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __push_back_slow_path<BaseTerrain::LayerGroup>
// Entry Point: 00a722d4
// Size: 512 bytes
// Signature: void __thiscall __push_back_slow_path<BaseTerrain::LayerGroup>(vector<BaseTerrain::LayerGroup,std::__ndk1::allocator<BaseTerrain::LayerGroup>> * this, LayerGroup * param_1)


/* void std::__ndk1::vector<BaseTerrain::LayerGroup, std::__ndk1::allocator<BaseTerrain::LayerGroup>
   >::__push_back_slow_path<BaseTerrain::LayerGroup>(BaseTerrain::LayerGroup&&) */

void __thiscall
std::__ndk1::vector<BaseTerrain::LayerGroup,std::__ndk1::allocator<BaseTerrain::LayerGroup>>::
__push_back_slow_path<BaseTerrain::LayerGroup>
          (vector<BaseTerrain::LayerGroup,std::__ndk1::allocator<BaseTerrain::LayerGroup>> *this,
          LayerGroup *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  void *pvVar4;
  ulong uVar5;
  __tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
  *p_Var6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  __tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
  *p_Var11;
  __tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
  *p_Var12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  lVar13 = *(long *)(this + 8) - *(long *)this >> 6;
  uVar1 = lVar13 + 1;
  if (uVar1 >> 0x3a != 0) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  uVar5 = *(long *)(this + 0x10) - *(long *)this;
  uVar7 = (long)uVar5 >> 5;
  if (uVar1 <= uVar7) {
    uVar1 = uVar7;
  }
  if (0x7fffffffffffffbf < uVar5) {
    uVar1 = 0x3ffffffffffffff;
  }
  if (uVar1 == 0) {
    pvVar4 = (void *)0x0;
  }
  else {
    if (uVar1 >> 0x3a != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pvVar4 = operator_new(uVar1 << 6);
  }
  uVar10 = *(undefined8 *)(param_1 + 0x10);
  uVar16 = *(undefined8 *)(param_1 + 0x18);
  puVar2 = (undefined8 *)((long)pvVar4 + lVar13 * 0x40);
  uVar3 = *(undefined4 *)(param_1 + 0x20);
  uVar15 = *(undefined8 *)(param_1 + 8);
  uVar14 = *(undefined8 *)param_1;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)param_1 = 0;
  puVar2[2] = uVar10;
  puVar2[3] = uVar16;
  lVar13 = *(long *)(param_1 + 0x28);
  lVar9 = *(long *)(param_1 + 0x30);
  *(undefined4 *)(puVar2 + 4) = uVar3;
  lVar8 = *(long *)(param_1 + 0x38);
  puVar2[1] = uVar15;
  *puVar2 = uVar14;
  puVar2[5] = lVar13;
  puVar2[6] = lVar9;
  puVar2[7] = lVar8;
  if (lVar8 == 0) {
    puVar2[5] = puVar2 + 6;
  }
  else {
    *(undefined8 **)(lVar9 + 0x10) = puVar2 + 6;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(LayerGroup **)(param_1 + 0x28) = param_1 + 0x30;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  p_Var12 = *(__tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
              **)this;
  p_Var11 = *(__tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
              **)(this + 8);
  pvVar4 = (void *)((long)pvVar4 + uVar1 * 0x40);
  if (p_Var11 == p_Var12) {
    *(undefined8 **)this = puVar2;
    *(undefined8 **)(this + 8) = puVar2 + 8;
    *(void **)(this + 0x10) = pvVar4;
  }
  else {
    lVar13 = 0;
    do {
      uVar16 = *(undefined8 *)(p_Var11 + lVar13 + -0x38);
      uVar10 = *(undefined8 *)(p_Var11 + lVar13 + -0x40);
      *(undefined8 *)((long)puVar2 + lVar13 + -0x30) = *(undefined8 *)(p_Var11 + lVar13 + -0x30);
      *(undefined8 *)((long)puVar2 + lVar13 + -0x38) = uVar16;
      *(undefined8 *)((long)puVar2 + lVar13 + -0x40) = uVar10;
      *(undefined8 *)(p_Var11 + lVar13 + -0x38) = 0;
      *(undefined8 *)(p_Var11 + lVar13 + -0x30) = 0;
      uVar10 = *(undefined8 *)(p_Var11 + lVar13 + -0x28);
      *(undefined8 *)(p_Var11 + lVar13 + -0x40) = 0;
      *(undefined4 *)((long)puVar2 + lVar13 + -0x20) = *(undefined4 *)(p_Var11 + lVar13 + -0x20);
      *(undefined8 *)((long)puVar2 + lVar13 + -0x28) = uVar10;
      *(undefined8 *)((long)puVar2 + lVar13 + -0x18) = *(undefined8 *)(p_Var11 + lVar13 + -0x18);
      lVar9 = *(long *)(p_Var11 + lVar13 + -0x10);
      *(long *)((long)puVar2 + lVar13 + -0x10) = lVar9;
      lVar8 = *(long *)(p_Var11 + lVar13 + -8);
      *(long *)((long)puVar2 + lVar13 + -8) = lVar8;
      if (lVar8 == 0) {
        *(long *)((long)puVar2 + lVar13 + -0x18) = (long)puVar2 + lVar13 + -0x10;
      }
      else {
        *(long *)(lVar9 + 0x10) = (long)puVar2 + lVar13 + -0x10;
        *(undefined8 *)(p_Var11 + lVar13 + -0x10) = 0;
        *(__tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          **)(p_Var11 + lVar13 + -0x18) = p_Var11 + lVar13 + -0x10;
        *(undefined8 *)(p_Var11 + lVar13 + -8) = 0;
      }
      lVar13 = lVar13 + -0x40;
    } while (p_Var11 + lVar13 != p_Var12);
    *(void **)(this + 0x10) = pvVar4;
    p_Var12 = *(__tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                **)this;
    p_Var11 = *(__tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                **)(this + 8);
    *(long *)this = (long)puVar2 + lVar13;
    *(undefined8 **)(this + 8) = puVar2 + 8;
    if (p_Var11 != p_Var12) {
      p_Var11 = p_Var11 + -0x18;
      do {
        __tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
        ::destroy(p_Var11,*(__tree_node **)(p_Var11 + 8));
        if (((byte)p_Var11[-0x28] & 1) != 0) {
          operator_delete(*(void **)(p_Var11 + -0x18));
        }
        p_Var6 = p_Var11 + -0x28;
        p_Var11 = p_Var11 + -0x40;
      } while (p_Var6 != p_Var12);
    }
  }
  if (p_Var12 !=
      (__tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
       *)0x0) {
    operator_delete(p_Var12);
    return;
  }
  return;
}


