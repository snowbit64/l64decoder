// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SpvReflectToYaml
// Entry Point: 00ae79c0
// Size: 64 bytes
// Signature: undefined __thiscall SpvReflectToYaml(SpvReflectToYaml * this, SpvReflectShaderModule * param_1, uint param_2)


/* SpvReflectToYaml::SpvReflectToYaml(SpvReflectShaderModule const&, unsigned int) */

void __thiscall
SpvReflectToYaml::SpvReflectToYaml
          (SpvReflectToYaml *this,SpvReflectShaderModule *param_1,uint param_2)

{
  *(SpvReflectShaderModule **)this = param_1;
  *(uint *)(this + 8) = param_2;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(SpvReflectToYaml **)(this + 0x10) = this + 0x18;
  *(undefined8 *)(this + 0x20) = 0;
  *(SpvReflectToYaml **)(this + 0x28) = this + 0x30;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(SpvReflectToYaml **)(this + 0x40) = this + 0x48;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(SpvReflectToYaml **)(this + 0x58) = this + 0x60;
  return;
}


