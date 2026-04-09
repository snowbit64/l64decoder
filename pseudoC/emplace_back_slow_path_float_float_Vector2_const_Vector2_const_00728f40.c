// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __emplace_back_slow_path<float&,float&,Vector2_const&,Vector2_const&>
// Entry Point: 00728f40
// Size: 320 bytes
// Signature: void __thiscall __emplace_back_slow_path<float&,float&,Vector2_const&,Vector2_const&>(vector<StoppingPath::PathKnot,std::__ndk1::allocator<StoppingPath::PathKnot>> * this, float * param_1, float * param_2, Vector2 * param_3, Vector2 * param_4)


/* void std::__ndk1::vector<StoppingPath::PathKnot, std::__ndk1::allocator<StoppingPath::PathKnot>
   >::__emplace_back_slow_path<float&, float&, Vector2 const&, Vector2 const&>(float&, float&,
   Vector2 const&, Vector2 const&) */

void __thiscall
std::__ndk1::vector<StoppingPath::PathKnot,std::__ndk1::allocator<StoppingPath::PathKnot>>::
__emplace_back_slow_path<float&,float&,Vector2_const&,Vector2_const&>
          (vector<StoppingPath::PathKnot,std::__ndk1::allocator<StoppingPath::PathKnot>> *this,
          float *param_1,float *param_2,Vector2 *param_3,Vector2 *param_4)

{
  ulong uVar1;
  void *__src;
  void *pvVar2;
  float *pfVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  size_t __n;
  float fVar8;
  
  __src = *(void **)this;
  __n = *(long *)(this + 8) - (long)__src;
  uVar1 = ((long)__n >> 3) * -0x5555555555555555 + 1;
  if (0xaaaaaaaaaaaaaaa < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  lVar6 = *(long *)(this + 0x10) - (long)__src >> 3;
  uVar7 = lVar6 * 0x5555555555555556;
  if (uVar1 <= uVar7) {
    uVar1 = uVar7;
  }
  if (0x555555555555554 < (ulong)(lVar6 * -0x5555555555555555)) {
    uVar1 = 0xaaaaaaaaaaaaaaa;
  }
  if (uVar1 < 0xaaaaaaaaaaaaaab) {
    pvVar2 = operator_new(uVar1 * 0x18);
    fVar8 = *param_2;
    pfVar3 = (float *)((long)pvVar2 + ((long)__n >> 3) * 8);
    uVar4 = *(undefined8 *)param_3;
    uVar5 = *(undefined8 *)param_4;
    *pfVar3 = *param_1;
    pfVar3[1] = fVar8;
    *(undefined8 *)(pfVar3 + 2) = uVar4;
    *(undefined8 *)(pfVar3 + 4) = uVar5;
    if (0 < (long)__n) {
      memcpy((void *)((long)pfVar3 - __n),__src,__n);
    }
    *(void **)this = (void *)((long)pfVar3 - __n);
    *(float **)(this + 8) = pfVar3 + 6;
    *(void **)(this + 0x10) = (void *)((long)pvVar2 + uVar1 * 0x18);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
}


