// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: reset
// Entry Point: 009fcedc
// Size: 216 bytes
// Signature: undefined reset(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DeferredDebugRenderer::reset() */

void DeferredDebugRenderer::reset(void)

{
  byte *pbVar1;
  undefined8 *in_x0;
  byte *pbVar2;
  byte *pbVar3;
  
  in_x0[1] = *in_x0;
  in_x0[4] = in_x0[3];
  in_x0[7] = in_x0[6];
  in_x0[10] = in_x0[9];
  in_x0[0x10] = in_x0[0xf];
  in_x0[0x13] = in_x0[0x12];
  in_x0[0xd] = in_x0[0xc];
  pbVar1 = (byte *)in_x0[0x3c];
  pbVar3 = (byte *)in_x0[0x3d];
  in_x0[0x16] = in_x0[0x15];
  in_x0[0x19] = in_x0[0x18];
  in_x0[0x22] = in_x0[0x21];
  in_x0[0x1c] = in_x0[0x1b];
  in_x0[0x1f] = in_x0[0x1e];
  in_x0[0x25] = in_x0[0x24];
  in_x0[0x28] = in_x0[0x27];
  in_x0[0x2b] = in_x0[0x2a];
  if (pbVar3 != pbVar1) {
    do {
      pbVar2 = pbVar3 + -0x38;
      if ((*pbVar2 & 1) != 0) {
        operator_delete(*(void **)(pbVar3 + -0x28));
      }
      pbVar3 = pbVar2;
    } while (pbVar2 != pbVar1);
    in_x0[0x3d] = pbVar1;
  }
  *(undefined *)(in_x0 + 0x41) = 0;
  return;
}


