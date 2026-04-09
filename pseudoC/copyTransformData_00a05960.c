// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: copyTransformData
// Entry Point: 00a05960
// Size: 352 bytes
// Signature: undefined __thiscall copyTransformData(CullingArgs * this, TransformArgs * param_1)


/* CullingArgs::copyTransformData(TransformArgs const&) */

void __thiscall CullingArgs::copyTransformData(CullingArgs *this,TransformArgs *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  memcpy(this,param_1,0x1dc);
  uVar1 = *(undefined8 *)(param_1 + 0x1e8);
  uVar3 = *(undefined8 *)(param_1 + 0x200);
  uVar2 = *(undefined8 *)(param_1 + 0x1f8);
  uVar5 = *(undefined8 *)(param_1 + 0x210);
  uVar4 = *(undefined8 *)(param_1 + 0x208);
  *(undefined8 *)(this + 0x1f0) = *(undefined8 *)(param_1 + 0x1f0);
  *(undefined8 *)(this + 0x1e8) = uVar1;
  *(undefined8 *)(this + 0x200) = uVar3;
  *(undefined8 *)(this + 0x1f8) = uVar2;
  *(undefined8 *)(this + 0x210) = uVar5;
  *(undefined8 *)(this + 0x208) = uVar4;
  uVar2 = *(undefined8 *)(param_1 + 0x230);
  uVar1 = *(undefined8 *)(param_1 + 0x228);
  uVar3 = *(undefined8 *)(param_1 + 0x218);
  uVar5 = *(undefined8 *)(param_1 + 0x250);
  uVar4 = *(undefined8 *)(param_1 + 0x248);
  uVar7 = *(undefined8 *)(param_1 + 0x240);
  uVar6 = *(undefined8 *)(param_1 + 0x238);
  *(undefined8 *)(this + 0x220) = *(undefined8 *)(param_1 + 0x220);
  *(undefined8 *)(this + 0x218) = uVar3;
  *(undefined8 *)(this + 0x250) = uVar5;
  *(undefined8 *)(this + 0x248) = uVar4;
  *(undefined8 *)(this + 0x240) = uVar7;
  *(undefined8 *)(this + 0x238) = uVar6;
  *(undefined8 *)(this + 0x230) = uVar2;
  *(undefined8 *)(this + 0x228) = uVar1;
  uVar2 = *(undefined8 *)(param_1 + 0x270);
  uVar1 = *(undefined8 *)(param_1 + 0x268);
  uVar3 = *(undefined8 *)(param_1 + 600);
  uVar5 = *(undefined8 *)(param_1 + 0x290);
  uVar4 = *(undefined8 *)(param_1 + 0x288);
  uVar7 = *(undefined8 *)(param_1 + 0x280);
  uVar6 = *(undefined8 *)(param_1 + 0x278);
  *(undefined8 *)(this + 0x260) = *(undefined8 *)(param_1 + 0x260);
  *(undefined8 *)(this + 600) = uVar3;
  *(undefined8 *)(this + 0x290) = uVar5;
  *(undefined8 *)(this + 0x288) = uVar4;
  *(undefined8 *)(this + 0x280) = uVar7;
  *(undefined8 *)(this + 0x278) = uVar6;
  *(undefined8 *)(this + 0x270) = uVar2;
  *(undefined8 *)(this + 0x268) = uVar1;
  uVar3 = *(undefined8 *)(param_1 + 0x2b0);
  uVar2 = *(undefined8 *)(param_1 + 0x2a8);
  uVar4 = *(undefined8 *)(param_1 + 0x298);
  uVar1 = *(undefined8 *)(param_1 + 0x2c8);
  uVar6 = *(undefined8 *)(param_1 + 0x2c0);
  uVar5 = *(undefined8 *)(param_1 + 0x2b8);
  *(undefined8 *)(this + 0x2a0) = *(undefined8 *)(param_1 + 0x2a0);
  *(undefined8 *)(this + 0x298) = uVar4;
  *(undefined8 *)(this + 0x2c8) = uVar1;
  *(undefined8 *)(this + 0x2c0) = uVar6;
  *(undefined8 *)(this + 0x2b8) = uVar5;
  *(undefined8 *)(this + 0x2b0) = uVar3;
  *(undefined8 *)(this + 0x2a8) = uVar2;
  uVar1 = *(undefined8 *)(param_1 + 0x2d0);
  *(undefined8 *)(this + 0x2d8) = *(undefined8 *)(param_1 + 0x2d8);
  *(undefined8 *)(this + 0x2d0) = uVar1;
  uVar3 = *(undefined8 *)(param_1 + 0x300);
  uVar2 = *(undefined8 *)(param_1 + 0x318);
  uVar1 = *(undefined8 *)(param_1 + 0x310);
  uVar7 = *(undefined8 *)(param_1 + 0x2e8);
  uVar6 = *(undefined8 *)(param_1 + 0x2e0);
  uVar5 = *(undefined8 *)(param_1 + 0x2f8);
  uVar4 = *(undefined8 *)(param_1 + 0x2f0);
  *(undefined8 *)(this + 0x308) = *(undefined8 *)(param_1 + 0x308);
  *(undefined8 *)(this + 0x300) = uVar3;
  *(undefined8 *)(this + 0x318) = uVar2;
  *(undefined8 *)(this + 0x310) = uVar1;
  *(undefined8 *)(this + 0x2e8) = uVar7;
  *(undefined8 *)(this + 0x2e0) = uVar6;
  *(undefined8 *)(this + 0x2f8) = uVar5;
  *(undefined8 *)(this + 0x2f0) = uVar4;
  uVar3 = *(undefined8 *)(param_1 + 0x340);
  uVar2 = *(undefined8 *)(param_1 + 0x358);
  uVar1 = *(undefined8 *)(param_1 + 0x350);
  uVar7 = *(undefined8 *)(param_1 + 0x328);
  uVar6 = *(undefined8 *)(param_1 + 800);
  uVar5 = *(undefined8 *)(param_1 + 0x338);
  uVar4 = *(undefined8 *)(param_1 + 0x330);
  *(undefined8 *)(this + 0x348) = *(undefined8 *)(param_1 + 0x348);
  *(undefined8 *)(this + 0x340) = uVar3;
  *(undefined8 *)(this + 0x358) = uVar2;
  *(undefined8 *)(this + 0x350) = uVar1;
  *(undefined8 *)(this + 0x328) = uVar7;
  *(undefined8 *)(this + 800) = uVar6;
  *(undefined8 *)(this + 0x338) = uVar5;
  *(undefined8 *)(this + 0x330) = uVar4;
  uVar5 = *(undefined8 *)(param_1 + 0x378);
  uVar4 = *(undefined8 *)(param_1 + 0x370);
  uVar3 = *(undefined8 *)(param_1 + 0x388);
  uVar2 = *(undefined8 *)(param_1 + 0x380);
  uVar1 = *(undefined8 *)(param_1 + 0x38d);
  uVar7 = *(undefined8 *)(param_1 + 0x368);
  uVar6 = *(undefined8 *)(param_1 + 0x360);
  *(undefined8 *)(this + 0x395) = *(undefined8 *)(param_1 + 0x395);
  *(undefined8 *)(this + 0x38d) = uVar1;
  *(undefined8 *)(this + 0x378) = uVar5;
  *(undefined8 *)(this + 0x370) = uVar4;
  *(undefined8 *)(this + 0x388) = uVar3;
  *(undefined8 *)(this + 0x380) = uVar2;
  *(undefined8 *)(this + 0x368) = uVar7;
  *(undefined8 *)(this + 0x360) = uVar6;
  *(CullingArgs **)(this + 0x3f0) = this + 0x1e0;
  return;
}


