// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: writeToStructBufferForTileShader
// Entry Point: 00945cc0
// Size: 196 bytes
// Signature: undefined __thiscall writeToStructBufferForTileShader(GsMaterial * this, float * param_1, uint param_2, MaterialShader * param_3)


/* GsMaterial::writeToStructBufferForTileShader(float*, unsigned int, MaterialShader const*) const
    */

void __thiscall
GsMaterial::writeToStructBufferForTileShader
          (GsMaterial *this,float *param_1,uint param_2,MaterialShader *param_3)

{
  undefined8 *puVar1;
  ushort uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if ((ulong)*(ushort *)(param_3 + 0x14) != 0xffff) {
    puVar1 = (undefined8 *)(param_1 + *(ushort *)(param_3 + 0x14));
    uVar6 = *(undefined8 *)(this + 0xa8);
    uVar5 = *(undefined8 *)(this + 0xa0);
    puVar1[2] = *(undefined8 *)(this + 0xb0);
    puVar1[1] = uVar6;
    *puVar1 = uVar5;
  }
  if (*(long *)(this + 0x80) != 0) {
    uVar2 = *(ushort *)(param_3 + 0x80);
    if (uVar2 != 0) {
      uVar4 = 0;
      if (uVar2 == 0) goto LAB_00945d54;
      do {
        uVar3 = (ulong)*(ushort *)(*(long *)(param_3 + 0x70) + uVar4 * 2);
        if (uVar3 != 0xffff) {
          memcpy(param_1 + uVar3,(void *)(*(long *)(this + 0x78) + uVar4 * 0x10),
                 (ulong)*(byte *)(*(long *)(param_3 + 0x78) + uVar4) << 2);
        }
LAB_00945d54:
        do {
          uVar4 = uVar4 + 1;
          if (uVar4 == uVar2) {
            return;
          }
        } while (*(ushort *)(param_3 + 0x80) <= uVar4);
      } while( true );
    }
  }
  return;
}


