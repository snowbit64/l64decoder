// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __swap_out_circular_buffer
// Entry Point: 008664e4
// Size: 368 bytes
// Signature: undefined __thiscall __swap_out_circular_buffer(vector<ConditionalAnimationItem,std::__ndk1::allocator<ConditionalAnimationItem>> * this, __split_buffer * param_1)


/* std::__ndk1::vector<ConditionalAnimationItem, std::__ndk1::allocator<ConditionalAnimationItem>
   >::__swap_out_circular_buffer(std::__ndk1::__split_buffer<ConditionalAnimationItem,
   std::__ndk1::allocator<ConditionalAnimationItem>&>&) */

void __thiscall
std::__ndk1::vector<ConditionalAnimationItem,std::__ndk1::allocator<ConditionalAnimationItem>>::
__swap_out_circular_buffer
          (vector<ConditionalAnimationItem,std::__ndk1::allocator<ConditionalAnimationItem>> *this,
          __split_buffer *param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  
  puVar3 = *(undefined8 **)this;
  lVar4 = *(long *)(param_1 + 8);
  if (*(undefined8 **)(this + 8) != puVar3) {
    puVar5 = *(undefined8 **)(this + 8) + -0xf;
    do {
      puVar6 = puVar5 + -0x10;
      uVar7 = *puVar6;
      *(undefined8 *)(lVar4 + -0xf3) = *(undefined8 *)((long)puVar5 + -0x7b);
      *(undefined8 *)(lVar4 + -0xf8) = uVar7;
      uVar8 = puVar5[-0xd];
      uVar7 = puVar5[-0xe];
      *(undefined8 *)(lVar4 + -0xd8) = puVar5[-0xc];
      *(undefined8 *)(lVar4 + -0xe0) = uVar8;
      *(undefined8 *)(lVar4 + -0xe8) = uVar7;
      uVar7 = *(undefined8 *)((long)puVar5 + -0x4c);
      puVar5[-0xd] = 0;
      puVar5[-0xc] = 0;
      uVar10 = puVar5[-10];
      uVar8 = puVar5[-0xb];
      puVar5[-0xe] = 0;
      *(undefined8 *)(lVar4 + -0xbc) = *(undefined8 *)((long)puVar5 + -0x44);
      *(undefined8 *)(lVar4 + -0xc4) = uVar7;
      *(undefined8 *)(lVar4 + -200) = uVar10;
      *(undefined8 *)(lVar4 + -0xd0) = uVar8;
      uVar8 = puVar5[-6];
      uVar7 = puVar5[-7];
      *(undefined8 *)(lVar4 + -0xa0) = puVar5[-5];
      *(undefined8 *)(lVar4 + -0xa8) = uVar8;
      *(undefined8 *)(lVar4 + -0xb0) = uVar7;
      puVar5[-6] = 0;
      puVar5[-5] = 0;
      uVar7 = puVar5[-4];
      puVar5[-7] = 0;
      *(undefined8 *)(lVar4 + -0x93) = *(undefined8 *)((long)puVar5 + -0x1b);
      *(undefined8 *)(lVar4 + -0x98) = uVar7;
      uVar7 = puVar5[-2];
      uVar2 = *(undefined4 *)(puVar5 + -1);
      *(undefined8 *)(lVar4 + -0x70) = 0;
      *(undefined8 *)(lVar4 + -0x68) = 0;
      *(undefined8 *)(lVar4 + -0x78) = 0;
      *(undefined8 *)(lVar4 + -0x88) = uVar7;
      *(undefined4 *)(lVar4 + -0x80) = uVar2;
      uVar7 = puVar5[1];
      *(undefined8 *)(lVar4 + -0x78) = *puVar5;
      *(undefined8 *)(lVar4 + -0x70) = uVar7;
      *(undefined8 *)(lVar4 + -0x68) = puVar5[2];
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[2] = 0;
      *(undefined8 *)(lVar4 + -0x60) = 0;
      *(undefined8 *)(lVar4 + -0x58) = 0;
      *(undefined8 *)(lVar4 + -0x50) = 0;
      uVar7 = puVar5[4];
      *(undefined8 *)(lVar4 + -0x60) = puVar5[3];
      *(undefined8 *)(lVar4 + -0x58) = uVar7;
      *(undefined8 *)(lVar4 + -0x50) = puVar5[5];
      uVar7 = puVar5[6];
      puVar5[3] = 0;
      puVar5[4] = 0;
      uVar8 = *(undefined8 *)((long)puVar5 + 0x35);
      puVar5[5] = 0;
      *(undefined8 *)(lVar4 + -0x30) = 0;
      *(undefined8 *)(lVar4 + -0x28) = 0;
      *(undefined8 *)(lVar4 + -0x38) = 0;
      *(undefined8 *)(lVar4 + -0x43) = uVar8;
      *(undefined8 *)(lVar4 + -0x48) = uVar7;
      uVar7 = puVar5[9];
      *(undefined8 *)(lVar4 + -0x38) = puVar5[8];
      *(undefined8 *)(lVar4 + -0x30) = uVar7;
      *(undefined8 *)(lVar4 + -0x28) = puVar5[10];
      puVar5[8] = 0;
      puVar5[9] = 0;
      puVar5[10] = 0;
      *(undefined8 *)(lVar4 + -0x20) = 0;
      *(undefined8 *)(lVar4 + -0x18) = 0;
      *(undefined8 *)(lVar4 + -0x10) = 0;
      uVar7 = puVar5[0xc];
      *(undefined8 *)(lVar4 + -0x20) = puVar5[0xb];
      *(undefined8 *)(lVar4 + -0x18) = uVar7;
      *(undefined8 *)(lVar4 + -0x10) = puVar5[0xd];
      puVar1 = puVar5 + 0xe;
      puVar5[0xc] = 0;
      puVar5[0xd] = 0;
      puVar5[0xb] = 0;
      puVar5 = puVar5 + -0x1f;
      lVar9 = *(long *)(param_1 + 8);
      *(undefined4 *)(lVar4 + -8) = *(undefined4 *)puVar1;
      lVar4 = lVar9 + -0xf8;
      *(long *)(param_1 + 8) = lVar4;
    } while (puVar6 != puVar3);
    puVar3 = *(undefined8 **)this;
  }
  *(long *)this = lVar4;
  *(undefined8 **)(param_1 + 8) = puVar3;
  uVar7 = *(undefined8 *)(this + 8);
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar7;
  uVar7 = *(undefined8 *)(this + 0x10);
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar7;
  *(undefined8 *)param_1 = *(undefined8 *)(param_1 + 8);
  return;
}


