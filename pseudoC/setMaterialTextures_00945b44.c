// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setMaterialTextures
// Entry Point: 00945b44
// Size: 372 bytes
// Signature: undefined __thiscall setMaterialTextures(GsMaterial * this, ICommandBuffer * param_1, MaterialShader * param_2)


/* GsMaterial::setMaterialTextures(ICommandBuffer*, MaterialShader const*) const */

undefined8 __thiscall
GsMaterial::setMaterialTextures(GsMaterial *this,ICommandBuffer *param_1,MaterialShader *param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_2[0x33] != (MaterialShader)0xff) {
    (**(code **)(*(long *)param_1 + 0x68))
              (param_1,param_2[0x33],*(undefined8 *)(*(long *)(this + 0x30) + 0x68));
  }
  if (param_2[0x34] != (MaterialShader)0xff) {
    (**(code **)(*(long *)param_1 + 0x68))
              (param_1,param_2[0x34],*(undefined8 *)(*(long *)(this + 0x38) + 0x68));
  }
  if (param_2[0x35] != (MaterialShader)0xff) {
    (**(code **)(*(long *)param_1 + 0x68))
              (param_1,param_2[0x35],*(undefined8 *)(*(long *)(this + 0x40) + 0x68));
  }
  if (param_2[0x36] != (MaterialShader)0xff) {
    (**(code **)(*(long *)param_1 + 0x68))
              (param_1,param_2[0x36],*(undefined8 *)(*(long *)(this + 0x48) + 0x68));
  }
  if ((*(long *)(this + 0x80) != 0) &&
     (uVar1 = (ulong)*(ushort *)(param_2 + 0x58), *(ushort *)(param_2 + 0x58) != 0)) {
    uVar3 = 0;
    uVar4 = uVar1 - 1;
    while( true ) {
      if ((uVar3 < uVar1) && (*(char *)(*(long *)(param_2 + 0x48) + uVar3) != -1)) {
        lVar2 = *(long *)(*(long *)(this + 0x70) + uVar3 * 8);
        if (lVar2 == 0) {
          return 0;
        }
        (**(code **)(*(long *)param_1 + 0x60))
                  (param_1,*(char *)(*(long *)(param_2 + 0x48) + uVar3),
                   *(undefined8 *)(lVar2 + 0x68));
        uVar1 = (ulong)*(ushort *)(param_2 + 0x58);
      }
      if ((uVar3 < uVar1) && (*(char *)(*(long *)(param_2 + 0x50) + uVar3) != -1)) {
        lVar2 = *(long *)(*(long *)(this + 0x70) + uVar3 * 8);
        if (lVar2 == 0) {
          return 0;
        }
        (**(code **)(*(long *)param_1 + 0x68))
                  (param_1,*(char *)(*(long *)(param_2 + 0x50) + uVar3),
                   *(undefined8 *)(lVar2 + 0x68));
      }
      if (uVar4 == uVar3) break;
      uVar1 = (ulong)*(ushort *)(param_2 + 0x58);
      uVar3 = uVar3 + 1;
    }
    return 1;
  }
  return 1;
}


