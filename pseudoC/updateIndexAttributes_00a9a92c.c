// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateIndexAttributes
// Entry Point: 00a9a92c
// Size: 240 bytes
// Signature: undefined __thiscall updateIndexAttributes(SoftVirtualTexture * this, ICommandBuffer * param_1)


/* SoftVirtualTexture::updateIndexAttributes(ICommandBuffer*) */

void __thiscall
SoftVirtualTexture::updateIndexAttributes(SoftVirtualTexture *this,ICommandBuffer *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *local_88 [10];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(**(long **)(this + 0x78) + 0x68))
            (*(long **)(this + 0x78),param_1,0,0,0,0,0x10,1,0,1,1,local_88);
  uVar4 = *(undefined8 *)(this + 0x120);
  uVar3 = *(undefined8 *)(this + 0x138);
  uVar2 = *(undefined8 *)(this + 0x130);
  uVar8 = *(undefined8 *)(this + 0x108);
  uVar7 = *(undefined8 *)(this + 0x100);
  uVar6 = *(undefined8 *)(this + 0x118);
  uVar5 = *(undefined8 *)(this + 0x110);
  local_88[0][0xd] = *(undefined8 *)(this + 0x128);
  local_88[0][0xc] = uVar4;
  local_88[0][0xf] = uVar3;
  local_88[0][0xe] = uVar2;
  local_88[0][0xb] = uVar6;
  local_88[0][10] = uVar5;
  uVar4 = *(undefined8 *)(this + 0x160);
  uVar3 = *(undefined8 *)(this + 0x178);
  uVar2 = *(undefined8 *)(this + 0x170);
  uVar6 = *(undefined8 *)(this + 0x148);
  uVar5 = *(undefined8 *)(this + 0x140);
  uVar10 = *(undefined8 *)(this + 0x158);
  uVar9 = *(undefined8 *)(this + 0x150);
  local_88[0][0x15] = *(undefined8 *)(this + 0x168);
  local_88[0][0x14] = uVar4;
  local_88[0][0x17] = uVar3;
  local_88[0][0x16] = uVar2;
  local_88[0][0x11] = uVar6;
  local_88[0][0x10] = uVar5;
  local_88[0][0x13] = uVar10;
  local_88[0][0x12] = uVar9;
  uVar4 = *(undefined8 *)(this + 0x1a0);
  uVar3 = *(undefined8 *)(this + 0x1b8);
  uVar2 = *(undefined8 *)(this + 0x1b0);
  uVar6 = *(undefined8 *)(this + 0x188);
  uVar5 = *(undefined8 *)(this + 0x180);
  uVar10 = *(undefined8 *)(this + 0x198);
  uVar9 = *(undefined8 *)(this + 400);
  local_88[0][0x1d] = *(undefined8 *)(this + 0x1a8);
  local_88[0][0x1c] = uVar4;
  local_88[0][0x1f] = uVar3;
  local_88[0][0x1e] = uVar2;
  local_88[0][0x19] = uVar6;
  local_88[0][0x18] = uVar5;
  local_88[0][0x1b] = uVar10;
  local_88[0][0x1a] = uVar9;
  uVar4 = *(undefined8 *)(this + 0xe0);
  uVar3 = *(undefined8 *)(this + 0xf8);
  uVar2 = *(undefined8 *)(this + 0xf0);
  uVar10 = *(undefined8 *)(this + 200);
  uVar9 = *(undefined8 *)(this + 0xc0);
  uVar6 = *(undefined8 *)(this + 0xd8);
  uVar5 = *(undefined8 *)(this + 0xd0);
  local_88[0][5] = *(undefined8 *)(this + 0xe8);
  local_88[0][4] = uVar4;
  local_88[0][7] = uVar3;
  local_88[0][6] = uVar2;
  local_88[0][9] = uVar8;
  local_88[0][8] = uVar7;
  local_88[0][1] = uVar10;
  *local_88[0] = uVar9;
  local_88[0][3] = uVar6;
  local_88[0][2] = uVar5;
  (**(code **)(**(long **)(this + 0x78) + 0x70))(*(long **)(this + 0x78),param_1,local_88);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


