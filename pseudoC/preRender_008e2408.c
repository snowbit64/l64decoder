// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: preRender
// Entry Point: 008e2408
// Size: 228 bytes
// Signature: undefined __cdecl preRender(RenderArgs * param_1, Matrix4x4 * param_2)


/* TyreTrackGeometry::preRender(RenderArgs const*, Matrix4x4 const&) */

void TyreTrackGeometry::preRender(RenderArgs *param_1,Matrix4x4 *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 uVar7;
  float fVar8;
  
  if (param_1[0x70] != (RenderArgs)0x0) {
    plVar2 = **(long ***)(param_2 + 0x3a0);
    param_1[0x70] = (RenderArgs)0x0;
    uVar3 = (**(code **)(*plVar2 + 0x138))();
    iVar6 = *(int *)(param_1 + 0x88) << 2;
    puVar4 = (undefined8 *)
             (**(code **)(**(long **)(param_1 + 0x78) + 0x10))
                       (*(long **)(param_1 + 0x78),uVar3,0,*(int *)(param_1 + 0x88) * 0x90,1);
    if (iVar6 != 0) {
      puVar5 = *(undefined8 **)(param_1 + 0x98);
      do {
        iVar6 = iVar6 + -1;
        fVar8 = *(float *)(puVar5 + 1);
        uVar7 = NEON_fcvtzs(*puVar5,9,4);
        *(undefined8 *)((long)puVar4 + 0xc) = *(undefined8 *)((long)puVar5 + 0xc);
        *(int *)(puVar4 + 1) = (int)(fVar8 * 512.0);
        *puVar4 = uVar7;
        *(undefined4 *)((long)puVar4 + 0x14) = *(undefined4 *)((long)puVar5 + 0x14);
        puVar4[3] = puVar5[3];
        puVar1 = puVar5 + 4;
        puVar5 = (undefined8 *)((long)puVar5 + 0x24);
        *(undefined4 *)(puVar4 + 4) = *(undefined4 *)puVar1;
        puVar4 = (undefined8 *)((long)puVar4 + 0x24);
      } while (iVar6 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x008e24d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x78) + 0x18))(*(long **)(param_1 + 0x78),uVar3);
    return;
  }
  return;
}


