// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: LoadXML
// Entry Point: 008641b0
// Size: 64 bytes
// Signature: undefined __thiscall LoadXML(ConditionalAnimationEntity * this, CharacterSet * param_1, DomXMLFile * param_2, char * param_3)


/* ConditionalAnimationEntity::LoadXML(CharacterSet*, DomXMLFile&, char const*) */

void __thiscall
ConditionalAnimationEntity::LoadXML
          (ConditionalAnimationEntity *this,CharacterSet *param_1,DomXMLFile *param_2,char *param_3)

{
  ConditionalAnimationPlayer::loadXMLFile
            ((DomXMLFile *)(this + 0x20),(char *)param_2,(ConditionalAnimationShared *)param_3);
  ConditionalAnimationPlayer::init
            ((ConditionalAnimationPlayer *)(DomXMLFile *)(this + 0x20),param_1);
  return;
}


