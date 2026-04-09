// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __swap_out_circular_buffer
// Entry Point: 00af010c
// Size: 456 bytes
// Signature: undefined __thiscall __swap_out_circular_buffer(vector<TextLine,std::__ndk1::allocator<TextLine>> * this, __split_buffer * param_1)


/* std::__ndk1::vector<TextLine, std::__ndk1::allocator<TextLine>
   >::__swap_out_circular_buffer(std::__ndk1::__split_buffer<TextLine,
   std::__ndk1::allocator<TextLine>&>&) */

void __thiscall
std::__ndk1::vector<TextLine,std::__ndk1::allocator<TextLine>>::__swap_out_circular_buffer
          (vector<TextLine,std::__ndk1::allocator<TextLine>> *this,__split_buffer *param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar2 = *(undefined8 **)this;
  lVar3 = *(long *)(param_1 + 8);
  if (*(undefined8 **)(this + 8) != puVar2) {
    puVar4 = *(undefined8 **)(this + 8) + -0x15;
    do {
      uVar7 = puVar4[-0x15];
      uVar5 = puVar4[-0x16];
      *(undefined8 *)(lVar3 + -0x148) = puVar4[-0x14];
      *(undefined8 *)(lVar3 + -0x150) = uVar7;
      *(undefined8 *)(lVar3 + -0x158) = uVar5;
      puVar4[-0x15] = 0;
      puVar4[-0x14] = 0;
      uVar7 = puVar4[-0x12];
      uVar5 = puVar4[-0x13];
      puVar4[-0x16] = 0;
      *(undefined8 *)(lVar3 + -0x130) = puVar4[-0x11];
      *(undefined8 *)(lVar3 + -0x138) = uVar7;
      *(undefined8 *)(lVar3 + -0x140) = uVar5;
      puVar4[-0x12] = 0;
      puVar4[-0x11] = 0;
      uVar7 = puVar4[-0xf];
      uVar5 = puVar4[-0x10];
      puVar4[-0x13] = 0;
      *(undefined8 *)(lVar3 + -0x118) = puVar4[-0xe];
      *(undefined8 *)(lVar3 + -0x120) = uVar7;
      *(undefined8 *)(lVar3 + -0x128) = uVar5;
      puVar4[-0xf] = 0;
      puVar4[-0xe] = 0;
      uVar7 = puVar4[-0xc];
      uVar5 = puVar4[-0xd];
      puVar4[-0x10] = 0;
      *(undefined8 *)(lVar3 + -0x100) = puVar4[-0xb];
      *(undefined8 *)(lVar3 + -0x108) = uVar7;
      *(undefined8 *)(lVar3 + -0x110) = uVar5;
      uVar8 = puVar4[-9];
      uVar7 = puVar4[-10];
      puVar4[-0xd] = 0;
      puVar4[-0xc] = 0;
      uVar5 = puVar4[-8];
      puVar4[-0xb] = 0;
      *(undefined8 *)(lVar3 + -0xd8) = 0;
      *(undefined8 *)(lVar3 + -0xd0) = 0;
      *(undefined8 *)(lVar3 + -0xf0) = uVar8;
      *(undefined8 *)(lVar3 + -0xf8) = uVar7;
      *(undefined8 *)(lVar3 + -0xe8) = uVar5;
      *(undefined8 *)(lVar3 + -0xe0) = 0;
      uVar5 = puVar4[-6];
      *(undefined8 *)(lVar3 + -0xe0) = puVar4[-7];
      *(undefined8 *)(lVar3 + -0xd8) = uVar5;
      *(undefined8 *)(lVar3 + -0xd0) = puVar4[-5];
      uVar1 = *(undefined4 *)(puVar4 + -4);
      puVar4[-6] = 0;
      puVar4[-5] = 0;
      puVar4[-7] = 0;
      *(undefined8 *)(lVar3 + -0xb8) = 0;
      *(undefined8 *)(lVar3 + -0xb0) = 0;
      *(undefined8 *)(lVar3 + -0xc0) = 0;
      uVar5 = puVar4[-3];
      uVar7 = puVar4[-2];
      *(undefined4 *)(lVar3 + -200) = uVar1;
      *(undefined8 *)(lVar3 + -0xc0) = uVar5;
      *(undefined8 *)(lVar3 + -0xb8) = uVar7;
      *(undefined8 *)(lVar3 + -0xb0) = puVar4[-1];
      puVar4[-3] = 0;
      puVar4[-2] = 0;
      uVar7 = puVar4[1];
      uVar5 = *puVar4;
      puVar4[-1] = 0;
      *(undefined8 *)(lVar3 + -0x98) = puVar4[2];
      *(undefined8 *)(lVar3 + -0xa0) = uVar7;
      *(undefined8 *)(lVar3 + -0xa8) = uVar5;
      puVar4[1] = 0;
      puVar4[2] = 0;
      uVar7 = puVar4[4];
      uVar5 = puVar4[3];
      *puVar4 = 0;
      *(undefined8 *)(lVar3 + -0x80) = puVar4[5];
      *(undefined8 *)(lVar3 + -0x88) = uVar7;
      *(undefined8 *)(lVar3 + -0x90) = uVar5;
      puVar4[4] = 0;
      puVar4[5] = 0;
      uVar7 = puVar4[7];
      uVar5 = puVar4[6];
      puVar4[3] = 0;
      *(undefined8 *)(lVar3 + -0x68) = puVar4[8];
      *(undefined8 *)(lVar3 + -0x70) = uVar7;
      *(undefined8 *)(lVar3 + -0x78) = uVar5;
      puVar4[6] = 0;
      puVar4[7] = 0;
      uVar7 = puVar4[10];
      uVar5 = puVar4[9];
      puVar4[8] = 0;
      *(undefined8 *)(lVar3 + -0x50) = puVar4[0xb];
      *(undefined8 *)(lVar3 + -0x58) = uVar7;
      *(undefined8 *)(lVar3 + -0x60) = uVar5;
      puVar4[9] = 0;
      puVar4[10] = 0;
      uVar7 = puVar4[0xd];
      uVar5 = puVar4[0xc];
      puVar4[0xb] = 0;
      *(undefined8 *)(lVar3 + -0x38) = puVar4[0xe];
      *(undefined8 *)(lVar3 + -0x40) = uVar7;
      *(undefined8 *)(lVar3 + -0x48) = uVar5;
      puVar4[0xc] = 0;
      puVar4[0xd] = 0;
      uVar7 = puVar4[0x10];
      uVar5 = puVar4[0xf];
      puVar4[0xe] = 0;
      *(undefined8 *)(lVar3 + -0x20) = puVar4[0x11];
      *(undefined8 *)(lVar3 + -0x28) = uVar7;
      *(undefined8 *)(lVar3 + -0x30) = uVar5;
      puVar4[0xf] = 0;
      puVar4[0x10] = 0;
      uVar7 = puVar4[0x13];
      uVar5 = puVar4[0x12];
      puVar4[0x11] = 0;
      *(undefined8 *)(lVar3 + -8) = puVar4[0x14];
      puVar6 = puVar4 + -0x16;
      *(undefined8 *)(lVar3 + -0x10) = uVar7;
      *(undefined8 *)(lVar3 + -0x18) = uVar5;
      puVar4[0x12] = 0;
      puVar4[0x13] = 0;
      puVar4[0x14] = 0;
      puVar4 = puVar4 + -0x2b;
      lVar3 = *(long *)(param_1 + 8) + -0x158;
      *(long *)(param_1 + 8) = lVar3;
    } while (puVar6 != puVar2);
    puVar2 = *(undefined8 **)this;
  }
  *(long *)this = lVar3;
  *(undefined8 **)(param_1 + 8) = puVar2;
  uVar5 = *(undefined8 *)(this + 8);
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar5;
  uVar5 = *(undefined8 *)(this + 0x10);
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar5;
  *(undefined8 *)param_1 = *(undefined8 *)(param_1 + 8);
  return;
}


