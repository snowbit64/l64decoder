// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00a612f4
// Entry Point: 00a612f4
// Size: 144 bytes
// Signature: undefined FUN_00a612f4(void)


void FUN_00a612f4(__vector_base<FoliageLayerGraphics::State,std::__ndk1::allocator<FoliageLayerGraphics::State>>
                  **param_1)

{
  __vector_base<FoliageLayerGraphics::State,std::__ndk1::allocator<FoliageLayerGraphics::State>>
  *p_Var1;
  __vector_base<FoliageLayerGraphics::State,std::__ndk1::allocator<FoliageLayerGraphics::State>>
  *p_Var2;
  __vector_base<FoliageLayerGraphics::State,std::__ndk1::allocator<FoliageLayerGraphics::State>>
  *p_Var3;
  
  p_Var3 = *param_1;
  if (p_Var3 == (__vector_base<FoliageLayerGraphics::State,std::__ndk1::allocator<FoliageLayerGraphics::State>>
                 *)0x0) {
    return;
  }
  p_Var1 = p_Var3;
  if (param_1[1] != p_Var3) {
    p_Var1 = param_1[1] + -0x28;
    do {
      std::__ndk1::
      __vector_base<FoliageLayerGraphics::State,std::__ndk1::allocator<FoliageLayerGraphics::State>>
      ::~__vector_base(p_Var1);
      if (((byte)p_Var1[-0x28] & 1) != 0) {
        operator_delete(*(void **)(p_Var1 + -0x18));
      }
      p_Var2 = p_Var1 + -0x30;
      p_Var1 = p_Var1 + -0x58;
    } while (p_Var2 != p_Var3);
    p_Var1 = *param_1;
  }
  param_1[1] = p_Var3;
  operator_delete(p_Var1);
  return;
}


