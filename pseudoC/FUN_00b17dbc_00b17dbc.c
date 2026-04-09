// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00b17dbc
// Entry Point: 00b17dbc
// Size: 356 bytes
// Signature: undefined FUN_00b17dbc(void)


undefined8 * FUN_00b17dbc(long param_1,undefined8 *param_2)

{
  __tree_node *p_Var1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  __tree_node **pp_Var5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  puVar2 = *(undefined8 **)(param_1 + 8);
  puVar4 = param_2 + 0xe;
  puVar3 = param_2;
  puVar6 = param_2;
  if (puVar4 != puVar2) {
    do {
      if ((*(byte *)puVar3 & 1) != 0) {
        operator_delete((void *)puVar3[2]);
      }
      uVar7 = puVar3[0xe];
      *(undefined2 *)(puVar3 + 0xe) = 0;
      puVar3[1] = puVar3[0xf];
      *puVar3 = uVar7;
      puVar3[2] = puVar3[0x10];
      if ((*(byte *)(puVar3 + 3) & 1) != 0) {
        operator_delete((void *)puVar3[5]);
      }
      uVar7 = puVar3[0x11];
      *(undefined2 *)(puVar3 + 0x11) = 0;
      pp_Var5 = (__tree_node **)(puVar3 + 7);
      puVar3[4] = puVar3[0x12];
      puVar3[3] = uVar7;
      puVar3[5] = puVar3[0x13];
      std::__ndk1::
      __tree<unsigned_char,std::__ndk1::less<unsigned_char>,std::__ndk1::allocator<unsigned_char>>::
      destroy((__tree<unsigned_char,std::__ndk1::less<unsigned_char>,std::__ndk1::allocator<unsigned_char>>
               *)(puVar3 + 6),*pp_Var5);
      p_Var1 = (__tree_node *)puVar3[0x15];
      *pp_Var5 = p_Var1;
      puVar3[6] = puVar3[0x14];
      puVar3[8] = puVar3[0x16];
      if (puVar3[0x16] == 0) {
        puVar3[6] = pp_Var5;
      }
      else {
        *(__tree_node ***)(p_Var1 + 0x10) = pp_Var5;
        puVar3[0x15] = 0;
        puVar3[0x16] = 0;
        puVar3[0x14] = puVar3 + 0x15;
      }
      puVar6 = puVar3 + 0xe;
      puVar3[10] = puVar3[0x18];
      puVar3[9] = puVar3[0x17];
      puVar3[0xc] = puVar3[0x1a];
      puVar3[0xb] = puVar3[0x19];
      *(undefined8 *)((long)puVar3 + 0x67) = *(undefined8 *)((long)puVar3 + 0xd7);
      puVar4 = puVar3 + 0x1c;
      puVar3 = puVar6;
    } while (puVar4 != puVar2);
    puVar4 = *(undefined8 **)(param_1 + 8);
    if (puVar6 == *(undefined8 **)(param_1 + 8)) goto LAB_00b17ebc;
  }
  do {
    std::__ndk1::
    __tree<unsigned_char,std::__ndk1::less<unsigned_char>,std::__ndk1::allocator<unsigned_char>>::
    destroy((__tree<unsigned_char,std::__ndk1::less<unsigned_char>,std::__ndk1::allocator<unsigned_char>>
             *)(puVar4 + -8),(__tree_node *)puVar4[-7]);
    if ((*(byte *)(puVar4 + -0xb) & 1) != 0) {
      operator_delete((void *)puVar4[-9]);
    }
    puVar3 = puVar4 + -0xe;
    if ((*(byte *)(puVar4 + -0xe) & 1) != 0) {
      operator_delete((void *)puVar4[-0xc]);
    }
    puVar4 = puVar3;
  } while (puVar3 != puVar6);
LAB_00b17ebc:
  *(undefined8 **)(param_1 + 8) = puVar6;
  return param_2;
}


