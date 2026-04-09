// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: allocateGrid
// Entry Point: 00a6eca4
// Size: 540 bytes
// Signature: undefined __thiscall allocateGrid(LocalGeometryTransformGroup * this, IRenderDevice * param_1)


/* LocalGeometryTransformGroup::allocateGrid(IRenderDevice*) */

void __thiscall
LocalGeometryTransformGroup::allocateGrid(LocalGeometryTransformGroup *this,IRenderDevice *param_1)

{
  long lVar1;
  short sVar2;
  long lVar3;
  void *pvVar4;
  ScenegraphNode *this_00;
  ScenegraphNode **ppSVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  int iVar9;
  long lVar10;
  float fVar11;
  undefined auStack_278 [512];
  long local_78;
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  *(undefined4 *)(this + 0x198) = 0;
  *(undefined4 *)(this + 0x194) = 0;
  uVar7 = (uint)((*(float *)(this + 0x178) + *(float *)(this + 0x178)) / *(float *)(this + 0x160) +
                4.0);
  uVar8 = (ulong)uVar7;
  *(uint *)(this + 400) = uVar7;
  pvVar4 = operator_new__((ulong)(uVar7 * uVar7) << 3);
  *(void **)(this + 0x180) = pvVar4;
  pvVar4 = operator_new__((ulong)(uVar7 * uVar7) * 0x30);
  *(void **)(this + 0x188) = pvVar4;
  if (0 < (int)uVar7) {
    iVar9 = 0;
    do {
      if (0 < (int)uVar8) {
        lVar10 = 0;
        do {
          FUN_00a6eec0(auStack_278);
          this_00 = (ScenegraphNode *)(**(code **)(*(long *)this + 0x60))(this,auStack_278,param_1);
          if (this_00 != (ScenegraphNode *)0x0) {
            ScenegraphNode::setVisibility(this_00,false);
            (**(code **)(*(long *)this + 0x18))(this,this_00,0xffffffff);
          }
          uVar7 = *(uint *)(this + 400);
          uVar8 = (ulong)uVar7;
          sVar2 = (short)lVar10;
          lVar1 = lVar10 + (int)(iVar9 * uVar7);
          ppSVar5 = (ScenegraphNode **)(*(long *)(this + 0x188) + lVar1 * 0x30);
          *(undefined2 *)(ppSVar5 + 4) = 0;
          *ppSVar5 = this_00;
          fVar11 = *(float *)(this + 0x160);
          *(short *)(ppSVar5 + 1) = sVar2;
          *(short *)((long)ppSVar5 + 10) = (short)iVar9;
          lVar10 = lVar10 + 1;
          *(undefined2 *)(ppSVar5 + 5) = 0;
          *(undefined4 *)((long)ppSVar5 + 0x24) = 0;
          *(undefined4 *)((long)ppSVar5 + 0x2c) = 0;
          *(float *)(ppSVar5 + 3) = ((float)(int)sVar2 + 0.5) * fVar11;
          *(float *)((long)ppSVar5 + 0x1c) = ((float)(int)(short)iVar9 + 0.5) * fVar11;
          *(ScenegraphNode ***)(*(long *)(this + 0x180) + lVar1 * 8) = ppSVar5;
        } while ((int)lVar10 < (int)uVar7);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < (int)uVar8);
  }
  *(undefined8 *)(this + 0x19c) = 0x20000044fa0000;
  pvVar4 = operator_new__(0x100);
  uVar6 = -(uVar8 >> 0x1f) & 0xfffffff800000000 | uVar8 << 3;
  *(void **)(this + 0x1a8) = pvVar4;
  if ((ulong)(long)(int)uVar8 >> 0x3d != 0) {
    uVar6 = 0xffffffffffffffff;
  }
  pvVar4 = operator_new__(uVar6);
  *(void **)(this + 0x1b8) = pvVar4;
  (**(code **)(*(long *)this + 0x70))(this,uVar8,param_1);
  (**(code **)(*(long *)this + 0x68))(this);
  if (*(long *)(lVar3 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


