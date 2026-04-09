// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AnimalAnimationSystemSource
// Entry Point: 0087820c
// Size: 496 bytes
// Signature: undefined __thiscall AnimalAnimationSystemSource(AnimalAnimationSystemSource * this, AnimalAnimationSystemSource * param_1)


/* AnimalAnimationSystemSource::AnimalAnimationSystemSource(AnimalAnimationSystemSource&&) */

void __thiscall
AnimalAnimationSystemSource::AnimalAnimationSystemSource
          (AnimalAnimationSystemSource *this,AnimalAnimationSystemSource *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar4 = 8;
  *(undefined8 *)this = *(undefined8 *)param_1;
  do {
    puVar2 = (undefined8 *)(param_1 + lVar4);
    puVar3 = (undefined8 *)(this + lVar4);
    lVar4 = lVar4 + 0x18;
    uVar6 = puVar2[1];
    uVar5 = *puVar2;
    puVar3[2] = puVar2[2];
    puVar3[1] = uVar6;
    *puVar3 = uVar5;
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = 0;
  } while (lVar4 != 0x308);
  *(undefined4 *)(this + 0x308) = *(undefined4 *)(param_1 + 0x308);
  lVar4 = 0;
  do {
    lVar1 = lVar4 + 0x70;
    *(undefined4 *)(this + lVar4 + 0x310) = *(undefined4 *)(param_1 + lVar4 + 0x310);
    uVar6 = *(undefined8 *)(param_1 + lVar4 + 800);
    uVar5 = *(undefined8 *)(param_1 + lVar4 + 0x318);
    *(undefined8 *)(this + lVar4 + 0x328) = *(undefined8 *)(param_1 + lVar4 + 0x328);
    *(undefined8 *)(this + lVar4 + 800) = uVar6;
    *(undefined8 *)(this + lVar4 + 0x318) = uVar5;
    *(undefined8 *)(param_1 + lVar4 + 0x328) = 0;
    *(undefined8 *)(param_1 + lVar4 + 800) = 0;
    uVar6 = *(undefined8 *)(param_1 + lVar4 + 0x338);
    uVar5 = *(undefined8 *)(param_1 + lVar4 + 0x330);
    *(undefined8 *)(param_1 + lVar4 + 0x318) = 0;
    *(undefined8 *)(this + lVar4 + 0x340) = *(undefined8 *)(param_1 + lVar4 + 0x340);
    *(undefined8 *)(this + lVar4 + 0x338) = uVar6;
    *(undefined8 *)(this + lVar4 + 0x330) = uVar5;
    *(undefined8 *)(param_1 + lVar4 + 0x340) = 0;
    *(undefined8 *)(param_1 + lVar4 + 0x338) = 0;
    uVar6 = *(undefined8 *)(param_1 + lVar4 + 0x35c);
    uVar5 = *(undefined8 *)(param_1 + lVar4 + 0x354);
    *(undefined8 *)(param_1 + lVar4 + 0x330) = 0;
    uVar8 = *(undefined8 *)(param_1 + lVar4 + 0x350);
    uVar7 = *(undefined8 *)(param_1 + lVar4 + 0x348);
    *(undefined8 *)(this + lVar4 + 0x368) = 0;
    *(undefined8 *)(this + lVar4 + 0x378) = 0;
    *(undefined8 *)(this + lVar4 + 0x370) = 0;
    *(undefined8 *)(this + lVar4 + 0x35c) = uVar6;
    *(undefined8 *)(this + lVar4 + 0x354) = uVar5;
    *(undefined8 *)(this + lVar4 + 0x350) = uVar8;
    *(undefined8 *)(this + lVar4 + 0x348) = uVar7;
    uVar5 = *(undefined8 *)(param_1 + lVar4 + 0x370);
    *(undefined8 *)(this + lVar4 + 0x368) = *(undefined8 *)(param_1 + lVar4 + 0x368);
    *(undefined8 *)(this + lVar4 + 0x370) = uVar5;
    *(undefined8 *)(this + lVar4 + 0x378) = *(undefined8 *)(param_1 + lVar4 + 0x378);
    *(undefined8 *)(param_1 + lVar4 + 0x378) = 0;
    *(undefined8 *)(param_1 + lVar4 + 0x370) = 0;
    *(undefined8 *)(param_1 + lVar4 + 0x368) = 0;
    lVar4 = lVar1;
  } while (lVar1 != 0xe00);
  *(undefined4 *)(this + 0x1110) = *(undefined4 *)(param_1 + 0x1110);
  lVar4 = -0x1800;
  do {
    lVar1 = lVar4 + 0x60;
    uVar6 = *(undefined8 *)(param_1 + lVar4 + 0x2920);
    uVar5 = *(undefined8 *)(param_1 + lVar4 + 0x2918);
    *(undefined8 *)(this + lVar4 + 0x2928) = *(undefined8 *)(param_1 + lVar4 + 0x2928);
    *(undefined8 *)(this + lVar4 + 0x2920) = uVar6;
    *(undefined8 *)(this + lVar4 + 0x2918) = uVar5;
    *(undefined8 *)(param_1 + lVar4 + 0x2920) = 0;
    uVar6 = *(undefined8 *)(param_1 + lVar4 + 0x2938);
    uVar5 = *(undefined8 *)(param_1 + lVar4 + 0x2930);
    *(undefined8 *)(param_1 + lVar4 + 0x2928) = 0;
    *(undefined8 *)(param_1 + lVar4 + 0x2918) = 0;
    *(undefined8 *)(this + lVar4 + 0x2940) = *(undefined8 *)(param_1 + lVar4 + 0x2940);
    *(undefined8 *)(this + lVar4 + 0x2938) = uVar6;
    *(undefined8 *)(this + lVar4 + 0x2930) = uVar5;
    *(undefined8 *)(param_1 + lVar4 + 0x2940) = 0;
    uVar6 = *(undefined8 *)(param_1 + lVar4 + 0x2950);
    uVar5 = *(undefined8 *)(param_1 + lVar4 + 0x2948);
    *(undefined8 *)(param_1 + lVar4 + 0x2938) = 0;
    *(undefined8 *)(param_1 + lVar4 + 0x2930) = 0;
    *(undefined8 *)(this + lVar4 + 0x2958) = *(undefined8 *)(param_1 + lVar4 + 0x2958);
    *(undefined8 *)(this + lVar4 + 0x2950) = uVar6;
    *(undefined8 *)(this + lVar4 + 0x2948) = uVar5;
    *(undefined8 *)(param_1 + lVar4 + 0x2958) = 0;
    uVar6 = *(undefined8 *)(param_1 + lVar4 + 0x2968);
    uVar5 = *(undefined8 *)(param_1 + lVar4 + 0x2960);
    *(undefined8 *)(param_1 + lVar4 + 0x2950) = 0;
    *(undefined8 *)(param_1 + lVar4 + 0x2948) = 0;
    *(undefined8 *)(this + lVar4 + 0x2970) = *(undefined8 *)(param_1 + lVar4 + 0x2970);
    *(undefined8 *)(this + lVar4 + 0x2968) = uVar6;
    *(undefined8 *)(this + lVar4 + 0x2960) = uVar5;
    lVar4 = lVar1;
  } while (lVar1 != 0);
  *(undefined4 *)(this + 0x2918) = *(undefined4 *)(param_1 + 0x2918);
  lVar4 = -0x1400;
  do {
    lVar1 = lVar4 + 0x28;
    *(undefined8 *)(this + lVar4 + 0x3d20) = *(undefined8 *)(param_1 + lVar4 + 0x3d20);
    uVar6 = *(undefined8 *)(param_1 + lVar4 + 0x3d30);
    uVar5 = *(undefined8 *)(param_1 + lVar4 + 0x3d28);
    *(undefined8 *)(this + lVar4 + 0x3d38) = *(undefined8 *)(param_1 + lVar4 + 0x3d38);
    *(undefined8 *)(this + lVar4 + 0x3d30) = uVar6;
    *(undefined8 *)(this + lVar4 + 0x3d28) = uVar5;
    *(undefined8 *)(param_1 + lVar4 + 0x3d38) = 0;
    *(undefined8 *)(param_1 + lVar4 + 0x3d30) = 0;
    *(undefined8 *)(param_1 + lVar4 + 0x3d28) = 0;
    *(undefined8 *)(this + lVar4 + 0x3d40) = *(undefined8 *)(param_1 + lVar4 + 0x3d40);
    lVar4 = lVar1;
  } while (lVar1 != 0);
  return;
}


