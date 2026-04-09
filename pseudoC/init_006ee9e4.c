// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: init
// Entry Point: 006ee9e4
// Size: 176 bytes
// Signature: undefined __thiscall init(BufferData2D * this, IRenderDevice * param_1, uint param_2)


/* FontOverlayRenderer::BufferData2D::init(IRenderDevice*, unsigned int) */

void __thiscall
FontOverlayRenderer::BufferData2D::init(BufferData2D *this,IRenderDevice *param_1,uint param_2)

{
  long lVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 local_50;
  undefined8 local_48;
  undefined *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pvVar2 = operator_new__((ulong)param_2 << 4);
  *(void **)this = pvVar2;
  *(uint *)(this + 8) = param_2;
  *(undefined4 *)(this + 0xc) = 0;
  local_50 = 0;
  local_40 = &DAT_004e7399;
  local_48 = 0x800010000;
  uVar3 = (**(code **)(*(long *)param_1 + 0x138))(param_1);
  uVar3 = (**(code **)(*(long *)param_1 + 0x108))(param_1,uVar3,&local_50);
  *(undefined8 *)(this + 0x10) = uVar3;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


