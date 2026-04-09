// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addKnot
// Entry Point: 00728470
// Size: 132 bytes
// Signature: undefined __thiscall addKnot(StoppingPath * this, float param_1, float param_2, Vector2 * param_3, Vector2 * param_4)


/* StoppingPath::addKnot(float, float, Vector2 const&, Vector2 const&) */

void __thiscall
StoppingPath::addKnot
          (StoppingPath *this,float param_1,float param_2,Vector2 *param_3,Vector2 *param_4)

{
  float *pfVar1;
  long lVar2;
  float local_30;
  float fStack_2c;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  pfVar1 = *(float **)(this + 8);
  local_30 = param_2;
  fStack_2c = param_1;
  if (pfVar1 < *(float **)(this + 0x10)) {
    *pfVar1 = param_1;
    pfVar1[1] = param_2;
    *(undefined8 *)(pfVar1 + 2) = *(undefined8 *)param_3;
    *(undefined8 *)(pfVar1 + 4) = *(undefined8 *)param_4;
    *(float **)(this + 8) = pfVar1 + 6;
  }
  else {
    std::__ndk1::vector<StoppingPath::PathKnot,std::__ndk1::allocator<StoppingPath::PathKnot>>::
    __emplace_back_slow_path<float&,float&,Vector2_const&,Vector2_const&>
              ((vector<StoppingPath::PathKnot,std::__ndk1::allocator<StoppingPath::PathKnot>> *)this
               ,&fStack_2c,&local_30,param_3,param_4);
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


