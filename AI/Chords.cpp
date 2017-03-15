#include		"Chords.hh"

Chords::Chords()
{
  std::vector<char>	chord;

  chord.push_back(static_cast<char>(C));
  chord.push_back(static_cast<char>(E));
  chord.push_back(static_cast<char>(G));
  _chords[C] = chord; 
  chord.clear();
  chord.push_back(static_cast<char>(C));
  chord.push_back(static_cast<char>(DS));
  chord.push_back(static_cast<char>(G));
  _chords[Cm] = chord;
  chord.clear();
  chord.push_back(static_cast<char>(C));
  chord.push_back(static_cast<char>(DS));
  chord.push_back(static_cast<char>(FS));
  _chords[Cdim] = chord;
  chord.clear();
  chord.push_back(static_cast<char>(C));
  chord.push_back(static_cast<char>(F));
  chord.push_back(static_cast<char>(G));
  _chords[Csus] = chord;
  chord.clear();
  chord.push_back(static_cast<char>(C));
  chord.push_back(static_cast<char>(E));
  chord.push_back(static_cast<char>(GS));
  _chords[Cplus] = chord;
  chord.clear();
  chord.push_back(static_cast<char>(C));
  chord.push_back(static_cast<char>(E));
  chord.push_back(static_cast<char>(F));
  chord.push_back(static_cast<char>(G));
  _chords[C4] = chord;
  chord.clear();
  chord.push_back(static_cast<char>(C));
  chord.push_back(static_cast<char>(E));
  chord.push_back(static_cast<char>(G));
  chord.push_back(static_cast<char>(A));
  _chords[C6] = chord;
  chord.clear();
  chord.push_back(static_cast<char>(C));
  chord.push_back(static_cast<char>(E));
  chord.push_back(static_cast<char>(G));
  chord.push_back(static_cast<char>(AS));
  _chords[C7] = chord;

  chord.clear();
  chord.push_back(static_cast<char>(CS));
  chord.push_back(static_cast<char>(F));
  chord.push_back(static_cast<char>(GS));
  _chords[CS] = chord;
  chord.clear();
  chord.push_back(static_cast<char>(CS));
  chord.push_back(static_cast<char>(E));
  chord.push_back(static_cast<char>(GS));
  _chords[CSm] = chord;
  chord.clear();
  chord.push_back(static_cast<char>(CS));
  chord.push_back(static_cast<char>(E));
  chord.push_back(static_cast<char>(G));
  _chords[CSdim] = chord;
  chord.clear();
  chord.push_back(static_cast<char>(CS));
  chord.push_back(static_cast<char>(FS));
  chord.push_back(static_cast<char>(GS));
  _chords[CSsus] = chord;
  chord.clear();
  chord.push_back(static_cast<char>(CS));
  chord.push_back(static_cast<char>(F));
  chord.push_back(static_cast<char>(A));
  _chords[CSplus] = chord;
  chord.clear();
  chord.push_back(static_cast<char>(CS));
  chord.push_back(static_cast<char>(F));
  chord.push_back(static_cast<char>(FS));
  chord.push_back(static_cast<char>(GS));
  _chords[CS4] = chord;
  chord.clear();
  chord.push_back(static_cast<char>(CS));
  chord.push_back(static_cast<char>(F));
  chord.push_back(static_cast<char>(GS));
  chord.push_back(static_cast<char>(AS));
  _chords[CS6] = chord;
  chord.clear();
  chord.push_back(static_cast<char>(CS));
  chord.push_back(static_cast<char>(F));
  chord.push_back(static_cast<char>(GS));
  chord.push_back(static_cast<char>(B));
  _chords[CS7] = chord;

  chord.clear();
  chord.push_back(static_cast<char>(D));
  chord.push_back(static_cast<char>(FS));
  chord.push_back(static_cast<char>(A));
  _chords[D] = chord;
  chord.clear();
  chord.push_back(static_cast<char>(D));
  chord.push_back(static_cast<char>(F));
  chord.push_back(static_cast<char>(A));
  _chords[Dm] = chord;
  chord.clear();
  chord.push_back(static_cast<char>(D));
  chord.push_back(static_cast<char>(F));
  chord.push_back(static_cast<char>(GS));
  _chords[Ddim] = chord;
  chord.clear();
  chord.push_back(static_cast<char>(D));
  chord.push_back(static_cast<char>(G));
  chord.push_back(static_cast<char>(A));
  _chords[Dsus] = chord;
  chord.clear();
  chord.push_back(static_cast<char>(D));
  chord.push_back(static_cast<char>(FS));
  chord.push_back(static_cast<char>(AS));
  _chords[Dplus] = chord;
  chord.clear();
  chord.push_back(static_cast<char>(D));
  chord.push_back(static_cast<char>(FS));
  chord.push_back(static_cast<char>(G));
  chord.push_back(static_cast<char>(A));
  _chords[D4] = chord;
  chord.clear();
  chord.push_back(static_cast<char>(D));
  chord.push_back(static_cast<char>(FS));
  chord.push_back(static_cast<char>(A));
  chord.push_back(static_cast<char>(B));
  _chords[D6] = chord;
  chord.clear();
  chord.push_back(static_cast<char>(D));
  chord.push_back(static_cast<char>(FS));
  chord.push_back(static_cast<char>(A));
  chord.push_back(static_cast<char>(C));
  _chords[D7] = chord;

  chord.clear();
  chord.push_back(static_cast<char>(DS));
  chord.push_back(static_cast<char>(G));
  chord.push_back(static_cast<char>(AS));
  _chords[DS] = chord;
  chord.clear();
  chord.push_back(static_cast<char>(DS));
  chord.push_back(static_cast<char>(FS));
  chord.push_back(static_cast<char>(AS));
  _chords[DSm] = chord;
  chord.clear();
  chord.push_back(static_cast<char>(DS));
  chord.push_back(static_cast<char>(FS));
  chord.push_back(static_cast<char>(A));
  _chords[DSdim] = chord;
  chord.clear();
  chord.push_back(static_cast<char>(DS));
  chord.push_back(static_cast<char>(GS));
  chord.push_back(static_cast<char>(AS));
  _chords[DSsus] = chord;
  chord.clear();
  chord.push_back(static_cast<char>(DS));
  chord.push_back(static_cast<char>(G));
  chord.push_back(static_cast<char>(B));
  _chords[DSplus] = chord;
  chord.clear();
  chord.push_back(static_cast<char>(DS));
  chord.push_back(static_cast<char>(G));
  chord.push_back(static_cast<char>(GS));
  chord.push_back(static_cast<char>(AS));
  _chords[DS4] = chord;
  chord.clear();
  chord.push_back(static_cast<char>(DS));
  chord.push_back(static_cast<char>(G));
  chord.push_back(static_cast<char>(AS));
  chord.push_back(static_cast<char>(C));
  _chords[DS6] = chord;
  chord.clear();
  chord.push_back(static_cast<char>(DS));
  chord.push_back(static_cast<char>(G));
  chord.push_back(static_cast<char>(AS));
  chord.push_back(static_cast<char>(CS));
  _chords[DS7] = chord;

  chord.clear();
  chord.push_back(static_cast<char>(E));
  chord.push_back(static_cast<char>(GS));
  chord.push_back(static_cast<char>(B));
  _chords[E] = chord;
  chord.clear();
  chord.push_back(static_cast<char>(E));
  chord.push_back(static_cast<char>(G));
  chord.push_back(static_cast<char>(B));
  _chords[Em] = chord;
  chord.clear();
  chord.push_back(static_cast<char>(E));
  chord.push_back(static_cast<char>(G));
  chord.push_back(static_cast<char>(AS));
  _chords[Edim] = chord;
  chord.clear();
  chord.push_back(static_cast<char>(E));
  chord.push_back(static_cast<char>(A));
  chord.push_back(static_cast<char>(B));
  _chords[Esus] = chord;
  chord.clear();
  chord.push_back(static_cast<char>(E));
  chord.push_back(static_cast<char>(GS));
  chord.push_back(static_cast<char>(C));
  _chords[Eplus] = chord;
  chord.clear();
  chord.push_back(static_cast<char>(E));
  chord.push_back(static_cast<char>(GS));
  chord.push_back(static_cast<char>(A));
  chord.push_back(static_cast<char>(B));
  _chords[E4] = chord;
  chord.clear();
  chord.push_back(static_cast<char>(E));
  chord.push_back(static_cast<char>(GS));
  chord.push_back(static_cast<char>(B));
  chord.push_back(static_cast<char>(CS));
  _chords[E6] = chord;
  chord.clear();
  chord.push_back(static_cast<char>(E));
  chord.push_back(static_cast<char>(GS));
  chord.push_back(static_cast<char>(B));
  chord.push_back(static_cast<char>(D));
  _chords[E7] = chord;

  chord.clear();
  chord.push_back(static_cast<char>(F));
  chord.push_back(static_cast<char>(A));
  chord.push_back(static_cast<char>(C));
  _chords[F] = chord;
  chord.clear();
  chord.push_back(static_cast<char>(F));
  chord.push_back(static_cast<char>(GS));
  chord.push_back(static_cast<char>(C));
  _chords[Fm] = chord;
  chord.clear();
  chord.push_back(static_cast<char>(F));
  chord.push_back(static_cast<char>(GS));
  chord.push_back(static_cast<char>(B));
  _chords[Fdim] = chord;
  chord.clear();
  chord.push_back(static_cast<char>(F));
  chord.push_back(static_cast<char>(AS));
  chord.push_back(static_cast<char>(C));
  _chords[Fsus] = chord;
  chord.clear();
  chord.push_back(static_cast<char>(F));
  chord.push_back(static_cast<char>(A));
  chord.push_back(static_cast<char>(CS));
  _chords[Fplus] = chord;
  chord.clear();
  chord.push_back(static_cast<char>(F));
  chord.push_back(static_cast<char>(A));
  chord.push_back(static_cast<char>(AS));
  chord.push_back(static_cast<char>(C));
  _chords[F4] = chord;
  chord.clear();
  chord.push_back(static_cast<char>(F));
  chord.push_back(static_cast<char>(A));
  chord.push_back(static_cast<char>(C));
  chord.push_back(static_cast<char>(D));
  _chords[F6] = chord;
  chord.clear();
  chord.push_back(static_cast<char>(F));
  chord.push_back(static_cast<char>(A));
  chord.push_back(static_cast<char>(C));
  chord.push_back(static_cast<char>(DS));
  _chords[F7] = chord;

  chord.clear();
  chord.push_back(static_cast<char>(FS));
  chord.push_back(static_cast<char>(AS));
  chord.push_back(static_cast<char>(CS));
  _chords[FS] = chord;
  chord.clear();
  chord.push_back(static_cast<char>(FS));
  chord.push_back(static_cast<char>(A));
  chord.push_back(static_cast<char>(CS));
  _chords[FSm] = chord;
  chord.clear();
  chord.push_back(static_cast<char>(FS));
  chord.push_back(static_cast<char>(A));
  chord.push_back(static_cast<char>(C));
  _chords[FSdim] = chord;
  chord.clear();
  chord.push_back(static_cast<char>(FS));
  chord.push_back(static_cast<char>(B));
  chord.push_back(static_cast<char>(CS));
  _chords[FSsus] = chord;
  chord.clear();
  chord.push_back(static_cast<char>(FS));
  chord.push_back(static_cast<char>(AS));
  chord.push_back(static_cast<char>(D));
  _chords[FSplus] = chord;
  chord.clear();
  chord.push_back(static_cast<char>(FS));
  chord.push_back(static_cast<char>(AS));
  chord.push_back(static_cast<char>(B));
  chord.push_back(static_cast<char>(CS));
  _chords[FS4] = chord;
  chord.clear();
  chord.push_back(static_cast<char>(FS));
  chord.push_back(static_cast<char>(AS));
  chord.push_back(static_cast<char>(CS));
  chord.push_back(static_cast<char>(DS));
  _chords[FS6] = chord;
  chord.clear();
  chord.push_back(static_cast<char>(FS));
  chord.push_back(static_cast<char>(AS));
  chord.push_back(static_cast<char>(CS));
  chord.push_back(static_cast<char>(E));
  _chords[FS7] = chord;

  chord.clear();
  chord.push_back(static_cast<char>(G));
  chord.push_back(static_cast<char>(B));
  chord.push_back(static_cast<char>(D));
  _chords[G] = chord;
  chord.clear();
  chord.push_back(static_cast<char>(G));
  chord.push_back(static_cast<char>(AS));
  chord.push_back(static_cast<char>(D));
  _chords[Gm] = chord;
  chord.clear();
  chord.push_back(static_cast<char>(G));
  chord.push_back(static_cast<char>(AS));
  chord.push_back(static_cast<char>(CS));
  _chords[Gdim] = chord;
  chord.clear();
  chord.push_back(static_cast<char>(G));
  chord.push_back(static_cast<char>(C));
  chord.push_back(static_cast<char>(D));
  _chords[Gsus] = chord;
  chord.clear();
  chord.push_back(static_cast<char>(G));
  chord.push_back(static_cast<char>(B));
  chord.push_back(static_cast<char>(DS));
  _chords[Gplus] = chord;
  chord.clear();
  chord.push_back(static_cast<char>(G));
  chord.push_back(static_cast<char>(B));
  chord.push_back(static_cast<char>(C));
  chord.push_back(static_cast<char>(D));
  _chords[G4] = chord;
  chord.clear();
  chord.push_back(static_cast<char>(G));
  chord.push_back(static_cast<char>(B));
  chord.push_back(static_cast<char>(D));
  chord.push_back(static_cast<char>(E));
  _chords[G6] = chord;
  chord.clear();
  chord.push_back(static_cast<char>(G));
  chord.push_back(static_cast<char>(B));
  chord.push_back(static_cast<char>(D));
  chord.push_back(static_cast<char>(F));
  _chords[G7] = chord;

  chord.clear();
  chord.push_back(static_cast<char>(GS));
  chord.push_back(static_cast<char>(C));
  chord.push_back(static_cast<char>(DS));
  _chords[GS] = chord;
  chord.clear();
  chord.push_back(static_cast<char>(GS));
  chord.push_back(static_cast<char>(B));
  chord.push_back(static_cast<char>(DS));
  _chords[GSm] = chord;
  chord.clear();
  chord.push_back(static_cast<char>(GS));
  chord.push_back(static_cast<char>(B));
  chord.push_back(static_cast<char>(D));
  _chords[GSdim] = chord;
  chord.clear();
  chord.push_back(static_cast<char>(GS));
  chord.push_back(static_cast<char>(CS));
  chord.push_back(static_cast<char>(DS));
  _chords[GSsus] = chord;
  chord.clear();
  chord.push_back(static_cast<char>(GS));
  chord.push_back(static_cast<char>(C));
  chord.push_back(static_cast<char>(E));
  _chords[GSplus] = chord;
  chord.clear();
  chord.push_back(static_cast<char>(GS));
  chord.push_back(static_cast<char>(C));
  chord.push_back(static_cast<char>(CS));
  chord.push_back(static_cast<char>(DS));
  _chords[GS4] = chord;
  chord.clear();
  chord.push_back(static_cast<char>(GS));
  chord.push_back(static_cast<char>(C));
  chord.push_back(static_cast<char>(DS));
  chord.push_back(static_cast<char>(F));
  _chords[GS6] = chord;
  chord.clear();
  chord.push_back(static_cast<char>(GS));
  chord.push_back(static_cast<char>(C));
  chord.push_back(static_cast<char>(DS));
  chord.push_back(static_cast<char>(FS));
  _chords[GS7] = chord;

  chord.clear();
  chord.push_back(static_cast<char>(A));
  chord.push_back(static_cast<char>(CS));
  chord.push_back(static_cast<char>(E));
  _chords[A] = chord;
  chord.clear();
  chord.push_back(static_cast<char>(A));
  chord.push_back(static_cast<char>(C));
  chord.push_back(static_cast<char>(E));
  _chords[Am] = chord;
  chord.clear();
  chord.push_back(static_cast<char>(A));
  chord.push_back(static_cast<char>(C));
  chord.push_back(static_cast<char>(DS));
  _chords[Adim] = chord;
  chord.clear();
  chord.push_back(static_cast<char>(A));
  chord.push_back(static_cast<char>(D));
  chord.push_back(static_cast<char>(E));
  _chords[Asus] = chord;
  chord.clear();
  chord.push_back(static_cast<char>(A));
  chord.push_back(static_cast<char>(CS));
  chord.push_back(static_cast<char>(F));
  _chords[Aplus] = chord;
  chord.clear();
  chord.push_back(static_cast<char>(A));
  chord.push_back(static_cast<char>(CS));
  chord.push_back(static_cast<char>(D));
  chord.push_back(static_cast<char>(E));
  _chords[A4] = chord;
  chord.clear();
  chord.push_back(static_cast<char>(A));
  chord.push_back(static_cast<char>(CS));
  chord.push_back(static_cast<char>(E));
  chord.push_back(static_cast<char>(FS));
  _chords[A6] = chord;
  chord.clear();
  chord.push_back(static_cast<char>(A));
  chord.push_back(static_cast<char>(CS));
  chord.push_back(static_cast<char>(E));
  chord.push_back(static_cast<char>(G));
  _chords[A7] = chord;

  chord.clear();
  chord.push_back(static_cast<char>(AS));
  chord.push_back(static_cast<char>(D));
  chord.push_back(static_cast<char>(F));
  _chords[AS] = chord;
  chord.clear();
  chord.push_back(static_cast<char>(AS));
  chord.push_back(static_cast<char>(CS));
  chord.push_back(static_cast<char>(F));
  _chords[ASm] = chord;
  chord.clear();
  chord.push_back(static_cast<char>(AS));
  chord.push_back(static_cast<char>(CS));
  chord.push_back(static_cast<char>(E));
  _chords[ASdim] = chord;
  chord.clear();
  chord.push_back(static_cast<char>(AS));
  chord.push_back(static_cast<char>(DS));
  chord.push_back(static_cast<char>(F));
  _chords[ASsus] = chord;
  chord.clear();
  chord.push_back(static_cast<char>(AS));
  chord.push_back(static_cast<char>(D));
  chord.push_back(static_cast<char>(FS));
  _chords[ASplus] = chord;
  chord.clear();
  chord.push_back(static_cast<char>(AS));
  chord.push_back(static_cast<char>(D));
  chord.push_back(static_cast<char>(DS));
  chord.push_back(static_cast<char>(F));
  _chords[AS4] = chord;
  chord.clear();
  chord.push_back(static_cast<char>(AS));
  chord.push_back(static_cast<char>(D));
  chord.push_back(static_cast<char>(F));
  chord.push_back(static_cast<char>(G));
  _chords[AS6] = chord;
  chord.clear();
  chord.push_back(static_cast<char>(AS));
  chord.push_back(static_cast<char>(D));
  chord.push_back(static_cast<char>(F));
  chord.push_back(static_cast<char>(GS));
  _chords[AS7] = chord;

  chord.clear();
  chord.push_back(static_cast<char>(B));
  chord.push_back(static_cast<char>(DS));
  chord.push_back(static_cast<char>(FS));
  _chords[B] = chord;
  chord.clear();
  chord.push_back(static_cast<char>(B));
  chord.push_back(static_cast<char>(D));
  chord.push_back(static_cast<char>(FS));
  _chords[Bm] = chord;
  chord.clear();
  chord.push_back(static_cast<char>(B));
  chord.push_back(static_cast<char>(D));
  chord.push_back(static_cast<char>(F));
  _chords[Bdim] = chord;
  chord.clear();
  chord.push_back(static_cast<char>(B));
  chord.push_back(static_cast<char>(E));
  chord.push_back(static_cast<char>(FS));
  _chords[Bsus] = chord;
  chord.clear();
  chord.push_back(static_cast<char>(B));
  chord.push_back(static_cast<char>(DS));
  chord.push_back(static_cast<char>(G));
  _chords[Bplus] = chord;
  chord.clear();
  chord.push_back(static_cast<char>(B));
  chord.push_back(static_cast<char>(DS));
  chord.push_back(static_cast<char>(E));
  chord.push_back(static_cast<char>(FS));
  _chords[B4] = chord;
  chord.clear();
  chord.push_back(static_cast<char>(B));
  chord.push_back(static_cast<char>(DS));
  chord.push_back(static_cast<char>(FS));
  chord.push_back(static_cast<char>(GS));
  _chords[B6] = chord;
  chord.clear();
  chord.push_back(static_cast<char>(B));
  chord.push_back(static_cast<char>(DS));
  chord.push_back(static_cast<char>(FS));
  chord.push_back(static_cast<char>(A));
  _chords[B7] = chord;
}

Chords::~Chords()
{

}

std::vector<char>	Chords::getChordFromName(const char name)
{
  return (_chords[name]);
}

int			main()
{
  Chords		test;

  return (0);
}