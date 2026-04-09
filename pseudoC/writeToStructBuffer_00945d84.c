// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: writeToStructBuffer
// Entry Point: 00945d84
// Size: 624 bytes
// Signature: undefined __thiscall writeToStructBuffer(GsMaterial * this, float * param_1, uint param_2, MaterialShader * param_3, GsShape * param_4, RenderArgs * param_5, float param_6, float param_7)


/* GsMaterial::writeToStructBuffer(float*, unsigned int, MaterialShader const*, GsShape const*,
   RenderArgs const*, float, float) const */

void __thiscall
GsMaterial::writeToStructBuffer
          (GsMaterial *this,float *param_1,uint param_2,MaterialShader *param_3,GsShape *param_4,
          RenderArgs *param_5,float param_6,float param_7)

{
  undefined8 *puVar1;
  void *__src;
  byte bVar2;
  ushort uVar3;
  long lVar4;
  void *pvVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 local_c0;
  ulong uStack_b8;
  undefined8 local_b0;
  ulong local_a8;
  undefined8 local_a0;
  ulong uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  long local_78;
  
  lVar4 = tpidr_el0;
  local_78 = *(long *)(lVar4 + 0x28);
  if (*(ushort *)(param_3 + 0x16) != 0xffff) {
    uStack_98 = *(ulong *)(param_4 + 0xe0);
    local_a0 = *(undefined8 *)(param_4 + 0xd8);
    uStack_b8 = *(ulong *)(param_4 + 0xc0);
    local_c0 = *(undefined8 *)(param_4 + 0xb8);
    local_88._0_4_ = (float)*(undefined8 *)(param_4 + 0xf0);
    local_a8 = *(ulong *)(param_4 + 0xd0);
    local_b0 = *(undefined8 *)(param_4 + 200);
    local_90 = CONCAT44((float)((ulong)*(undefined8 *)(param_4 + 0xe8) >> 0x20) -
                        (float)((ulong)*(undefined8 *)(param_5 + 0x354) >> 0x20),
                        (float)*(undefined8 *)(param_4 + 0xe8) -
                        (float)*(undefined8 *)(param_5 + 0x354));
    local_88 = CONCAT44((int)((ulong)*(undefined8 *)(param_4 + 0xf0) >> 0x20),
                        (float)local_88 - *(float *)(param_5 + 0x35c));
    ShaderStructLayout::setParameterMatrix3x4f
              (param_1,*(ushort *)(param_3 + 0x16),(Matrix4x4 *)&local_c0);
  }
  if (*(ushort *)(param_3 + 0x18) != 0xffff) {
    local_c0 = *(undefined8 *)(param_4 + 0x1c8);
    local_b0 = *(undefined8 *)(param_4 + 0x1d4);
    local_a0 = *(undefined8 *)(param_4 + 0x1e0);
    uStack_b8 = (ulong)*(uint *)(param_4 + 0x1d0);
    local_a8 = (ulong)*(uint *)(param_4 + 0x1dc);
    local_90 = CONCAT44((float)((ulong)*(undefined8 *)(param_4 + 0x1ec) >> 0x20) -
                        (float)((ulong)*(undefined8 *)(param_5 + 0x354) >> 0x20),
                        (float)*(undefined8 *)(param_4 + 0x1ec) -
                        (float)*(undefined8 *)(param_5 + 0x354));
    uStack_98 = (ulong)*(uint *)(param_4 + 0x1e8);
    local_88 = CONCAT44(0x3f800000,*(float *)(param_4 + 500) - *(float *)(param_5 + 0x35c));
    ShaderStructLayout::setParameterMatrix3x4f
              (param_1,*(ushort *)(param_3 + 0x18),(Matrix4x4 *)&local_c0);
  }
  if ((ulong)*(ushort *)(param_3 + 0x1a) != 0xffff) {
    param_1[*(ushort *)(param_3 + 0x1a)] = param_6;
  }
  if ((ulong)*(ushort *)(param_3 + 0x1c) != 0xffff) {
    param_1[*(ushort *)(param_3 + 0x1c)] = param_7;
  }
  if ((ulong)*(ushort *)(param_3 + 0x14) != 0xffff) {
    puVar1 = (undefined8 *)(param_1 + *(ushort *)(param_3 + 0x14));
    uVar10 = *(undefined8 *)(this + 0xa8);
    uVar9 = *(undefined8 *)(this + 0xa0);
    puVar1[2] = *(undefined8 *)(this + 0xb0);
    puVar1[1] = uVar10;
    *puVar1 = uVar9;
  }
  if ((ulong)*(ushort *)(param_3 + 0x20) != 0xffff) {
    param_1[*(ushort *)(param_3 + 0x20)] = *(float *)(this + 0x170);
  }
  if (*(long *)(this + 0x80) != 0) {
    uVar3 = *(ushort *)(param_3 + 0x80);
    if (uVar3 != 0) {
      uVar7 = 0;
      if (uVar3 == 0) goto LAB_00945f80;
      do {
        uVar8 = (ulong)*(ushort *)(*(long *)(param_3 + 0x70) + uVar7 * 2);
        if (uVar8 != 0xffff) {
          bVar2 = *(byte *)(*(long *)(param_3 + 0x78) + uVar7);
          pvVar5 = (void *)GsShape::getCustomShaderParameter(param_4,(uint)uVar7,this);
          __src = (void *)(*(long *)(this + 0x78) + uVar7 * 0x10);
          if (pvVar5 != (void *)0x0) {
            __src = pvVar5;
          }
          memcpy(param_1 + uVar8,__src,(ulong)bVar2 << 2);
        }
LAB_00945f80:
        do {
          uVar7 = uVar7 + 1;
          if (uVar7 == uVar3) goto LAB_00945f9c;
        } while (*(ushort *)(param_3 + 0x80) <= uVar7);
      } while( true );
    }
  }
LAB_00945f9c:
  plVar6 = *(long **)(this + 0x90);
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x10))(plVar6,param_1,param_3,param_5);
  }
  if (*(long *)(lVar4 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


