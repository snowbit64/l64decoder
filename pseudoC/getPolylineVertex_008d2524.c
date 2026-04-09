// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getPolylineVertex
// Entry Point: 008d2524
// Size: 92 bytes
// Signature: undefined __thiscall getPolylineVertex(FillPlaneGeometry * this, uint param_1, uint param_2, Vector3 * param_3)


/* FillPlaneGeometry::getPolylineVertex(unsigned int, unsigned int, Vector3&) const */

void __thiscall
FillPlaneGeometry::getPolylineVertex
          (FillPlaneGeometry *this,uint param_1,uint param_2,Vector3 *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)
           (*(long *)(*(long *)(*(long *)(this + 0xb0) + (ulong)param_1 * 8) + 0x10) +
           (ulong)param_2 * 0xc);
  uVar3 = *puVar2;
  *(undefined4 *)(param_3 + 8) = *(undefined4 *)(puVar2 + 1);
  *(undefined8 *)param_3 = uVar3;
  lVar1 = *(long *)(*(long *)(this + 0xb0) + (ulong)param_1 * 8);
  *(float *)param_3 = *(float *)(lVar1 + 0x28) + *(float *)param_3;
  *(float *)(param_3 + 8) = *(float *)(lVar1 + 0x2c) + *(float *)(param_3 + 8);
  return;
}


