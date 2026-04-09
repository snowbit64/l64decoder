// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getVertex
// Entry Point: 00f57d94
// Size: 212 bytes
// Signature: undefined __thiscall getVertex(btBoxShape * this, int param_1, btVector3 * param_2)


/* btBoxShape::getVertex(int, btVector3&) const */

void __thiscall btBoxShape::getVertex(btBoxShape *this,int param_1,btVector3 *param_2)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  
  uVar8 = *(undefined8 *)(this + 0x2c);
  fVar9 = *(float *)(this + 0x34);
  fVar2 = (float)(**(code **)(*(long *)this + 0x60))();
  fVar3 = (float)(**(code **)(*(long *)this + 0x60))(this);
  fVar4 = (float)(**(code **)(*(long *)this + 0x60))(this);
  uVar1 = (uint)param_1 >> 2 & 1;
  *(undefined4 *)(param_2 + 0xc) = 0;
  uVar5 = CONCAT44((uint)param_1 >> 1,param_1) & 0x100000001;
  uVar6 = NEON_scvtf(uVar5,4);
  uVar7 = NEON_scvtf((ulong)(CONCAT14((char)(uVar5 >> 0x20),(uint)(byte)((byte)uVar5 ^ 1)) ^
                            0x100000000),4);
  *(float *)(param_2 + 8) = (fVar4 + fVar9) * ((float)(uVar1 ^ 1) - (float)uVar1);
  *(ulong *)param_2 =
       CONCAT44((fVar3 + (float)((ulong)uVar8 >> 0x20)) *
                ((float)((ulong)uVar7 >> 0x20) - (float)((ulong)uVar6 >> 0x20)),
                (fVar2 + (float)uVar8) * ((float)uVar7 - (float)uVar6));
  return;
}


