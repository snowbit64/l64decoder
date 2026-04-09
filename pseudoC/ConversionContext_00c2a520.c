// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ConversionContext
// Entry Point: 00c2a520
// Size: 52 bytes
// Signature: undefined __thiscall ConversionContext(ConversionContext * this, SharedContext * param_1, IR_Function * param_2, SHADER_STAGE param_3)


/* IR_HllConvertUtil::ConversionContext::ConversionContext(IR_HllConvertUtil::SharedContext&,
   IR_Function*, IProgramObject::SHADER_STAGE) */

void __thiscall
IR_HllConvertUtil::ConversionContext::ConversionContext
          (ConversionContext *this,SharedContext *param_1,IR_Function *param_2,SHADER_STAGE param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  *(SharedContext **)this = param_1;
  *(IR_Function **)(this + 8) = param_2;
  *(undefined4 *)(this + 0x10) = 0;
  *(SHADER_STAGE *)(this + 0x14) = param_3;
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined4 *)param_1;
  *(undefined2 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = uVar2;
  *(undefined4 *)(this + 0x10) = uVar1;
  *(undefined8 *)(this + 0x28) = 0x100000001;
  *(undefined4 *)(this + 0x30) = 1;
  return;
}


