// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateBounds
// Entry Point: 00f78bd0
// Size: 180 bytes
// Signature: undefined updateBounds(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* btSoftBody::updateBounds() */

void btSoftBody::updateBounds(void)

{
  long *plVar1;
  long in_x0;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  
  puVar2 = *(undefined8 **)(in_x0 + 0x4b8);
  if (puVar2 == (undefined8 *)0x0) {
    *(undefined8 *)(in_x0 + 0x49c) = 0;
    *(undefined8 *)(in_x0 + 0x494) = 0;
    *(undefined8 *)(in_x0 + 0x4ac) = 0;
    *(undefined8 *)(in_x0 + 0x4a4) = 0;
  }
  else {
    fVar3 = (float)(**(code **)(**(long **)(in_x0 + 200) + 0x60))();
    fVar4 = *(float *)(puVar2 + 1);
    uVar5 = *puVar2;
    *(undefined4 *)(in_x0 + 0x4a0) = 0;
    *(float *)(in_x0 + 0x49c) = fVar4 - fVar3;
    *(undefined8 *)(in_x0 + 0x494) =
         CONCAT44((float)((ulong)uVar5 >> 0x20) - fVar3,(float)uVar5 - fVar3);
    uVar5 = puVar2[2];
    fVar4 = *(float *)(puVar2 + 3);
    *(undefined4 *)(in_x0 + 0x4b0) = 0;
    *(ulong *)(in_x0 + 0x4a4) = CONCAT44((float)((ulong)uVar5 >> 0x20) + fVar3,(float)uVar5 + fVar3)
    ;
    *(float *)(in_x0 + 0x4ac) = fVar4 + fVar3;
    if (*(long *)(in_x0 + 0xc0) != 0) {
      plVar1 = *(long **)(*(long *)(in_x0 + 0x348) + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00f78c68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x20))
                (plVar1,*(long *)(in_x0 + 0xc0),in_x0 + 0x494,in_x0 + 0x4a4,
                 *(undefined8 *)(*(long *)(in_x0 + 0x348) + 0x28));
      return;
    }
  }
  return;
}


