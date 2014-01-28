#include "pebble.h"

// Setup the array to hold the scriptures
		
char* verse[] = { 
	"Isaiah 9:6              For to us a child is born, to us a son is given, and the government will be on his shoulders. And he will be called Wonderful Counselor, Mighty God, Everlasting Father, Prince of Peace.", 
	"Isaiah 40:28            Do you not know? Have you not heard? The Lord is the everlasting God, the Creator of the ends of the earth. He will not grow tired or weary, and his understanding no one can fathom.", 
	"Isaiah 9:6              For to us a child is born, to us a son is given, and the government will be on his shoulders. And he will be called Wonderful Counselor, Mighty God, Everlasting Father, Prince of Peace.",
	"Isaiah 40:28            Do you not know? Have you not heard? The Lord is the everlasting God, the Creator of the ends of the earth. He will not grow tired or weary, and his understanding no one can fathom.",
	"Genesis 1:1             In the beginning God created the heavens and the earth.",
	"John 3:16-17            For God so loved the world that He gave His one and only Son, that whoever believes in Him shall not perish but have eternal life. For God did not send His Son into the world to condemn the world, but to save the world through Him.",
	"Romans 3:23             For all have sinned and fall short of the glory of God.",
	"Romans 6:23             For the wages of sin is death, but the gift of God is eternal life in Christ Jesus our Lord.",
	"Revelation 3:20         Here I am! I stand at the door and knock. If anyone hears my voice and opens the door, I will come in and eat with him, and he with me.",
	"John 14:6               Jesus answered, 'I am the way and the truth and the life. No one comes to the father except through me.",
	"Ephesians 2:8,9         For it is by grace you have been saved, through faith—and this not from yourselves, it is the gift of God—not by works, so that no one can boast.",
	"2 Cor 5:17              Therefore, if anyone is in Christ he is a new creation; the old has gone, the new has come!",
	"Romans 8:28             And we know that in all things God works for the good of those who love him, who have been called according to his purpose.",
	"Isaiah 40:30-31         Even youths grow tired and weary, and young men stumble and fall; but those who hope in the Lord will renew their strength. They will soar on wings like eagles; they will run and not grow weary, they will walk and not be faint.",
	"Romans 8:38-39          For I am convinced that neither death nor life, neither angels nor demons, neither the present nor the future, nor any powers, neither height nor depth, nor anything else in all creation, will be able to separate us from the love of God that is in Christ Jesus our Lord.",
	"Matt 11:28-30           Come to me, all you who are weary and burdened, and I will give you rest. Take my yoke upon you and learn from me, for I am gentle and humble in heart ,and you will find rest for your souls. For my yoke is easy and my burden is light.",
	"Psalm 27:1              The Lord is my light and my salvation—whom shall I fear? The Lord is the stronghold of my life—of whom shall I be afraid?",
	"Jeremiah 29:11          'For I know the plans I have for you,” declares the Lord, “plans to prosper you and not to harm you, plans to give you hope and a future.” Is this your favorite verse? Here are some ways to use it to decorate your home!",
	"Hebrews 13:8            Jesus Christ is the same yesterday and today and forever.",
	"2 Peter 3:9             The Lord is not slow in keeping His promise, as some understand slowness. He is patient with you, not wanting anyone to perish, but everyone to come to repentance.",
	"Lam 3:22-23             Because of the Lord’s great love we are not consumed, for his compassions never fail. They are new every morning; great is your faithfulness.",
	"2 Cor 12:9              But he said to me, “My grace is sufficient for you, for my power is made perfect in weakness.” Therefore I will boast all the more gladly about my weaknesses, so that Christ’s power may rest on me.",
	"2 Cor 4:18              So we fix our eyes not on what is seen, but on what is unseen. For what is seen is temporary, but what is unseen is eternal.",
	"Psalm 37:4,5            Delight yourself in the Lord and he will give you the desires of your heart. Commit your way to the Lord, trust in him and he will do this.",
	"Proverbs 3:5,6          Trust in the Lord with all your heart and lean not on your own understanding; in all your ways acknowledge him, and he will make your paths straight.",
	"Phil 4:13                   I can do all things through Christ who strengthens me.",
	"Gal 2:20                   I have been crucified with Christ and I no longer live, but Christ lives in me. The life I live in the body, I live by faith in the Son of God, who loved me and gave himself for me.",
	"James 1:22              Do not merely listen to the word, and so deceive yourselves. Do what it says.",
	"Col 3:23                Whatever you do, work at it with all your heart, as working for the Lord, not for men.",
	"1 Cor 15:58             Therefore, my dear brothers, stand firm. Let nothing move you. Always give yourselves fully to the work of the Lord, because you know that your labor in the Lord is not in vain.",
	"James 4:7               Submit yourselves, then, to God. Resist the devil, and he will flee from you.",
	"Luke 16:13              No servant can serve two masters. Either he will hate the one and love the other, or he will be devoted to the one and despise the other. You cannot serve both God and Money.",
	"1 John 4:7,8            Dear friends, let us love one another, for love comes from God. Everyone who loves has been born of God and knows God. Whoever does not love does not know God, because God is love.",
	"Gal 5:22-23             But the fruit of the Spirit is love, joy, peace, patience, kindness, goodness, faithfulness, gentleness and self-control. Against such things there is no law.",
	"Hebrews 12:1-2          Therefore, since we are surrounded by such a great cloud of witnesses, let us throw off everything that hinders and the sin that so easily entangles, and let us run with perseverance the race marked out for us. Let us fix our eyes on Jesus, the author and perfecter of our faith, who for the joy set before Him endured the cross, scorning its shame, and sat down at the right hand of the throne of God.",
	"Acts 1:8                But you will receive power when the Holy Spirit comes on you; and you will be my witnesses in Jerusalem, and in all Judea and Samaria, and to the ends of the earth.",
	"Romans 12:1-2           Therefore, I urge you, brothers, in view of God’s mercy, to offer your bodies as living sacrifices, holy and pleasing to God—this is your spiritual act of worship. Do not conform any longer to the pattern of this world, but be transformed by the renewing of your mind. Then you will be able to test and approve what God’s will is—his good, pleasing and perfect will.",
	"1 Thess 5:18            Give thanks in all circumstances, for this is God’s will for you in Christ Jesus.",
	"Psalm 19:14             May the words of my mouth and the meditation of my heart be pleasing in your sight, O Lord, my Rock and my Redeemer.",
	"Phil 4:6,7                Do not be anxious about anything, but in everything, by prayer and petition, with thanksgiving, present your requests to God. And the peace of God, which transcends all understanding, will guard your hearts and your minds in Christ Jesus.",
	"2 Tim 3:16              All Scripture is God-breathed and is useful for teaching, rebuking, correcting, and training in righteousness.",
	"Psalm 119:105           Your word is a lamp to my feet and a light for my path.",
	"Psalm 119:11             I have hidden your word in my heart that I might not sin against you.",
	"Hebrews 4:16            Let us then approach the throne of grace with confidence, so that we may receive mercy and find grace to help us in our time of need.",
	"1 John 1:9                If we confess our sins, he is faithful and just and will forgive us our sins and purify us from all unrighteousness.",
	"James 5:16              Therefore confess your sins to each other and pray for each other so that you may be healed. The prayer of a righteous man is powerful and effective.",
	"1 Cor 10:13             No temptation has seized you except what is common to man. And God is faithful; he will not let you be tempted beyond what you can bear. But when you are tempted, he will also provide a way out, so that you can stand up under it.",
	"Micah 6:8               He has showed you, O man, what is good. And what does the Lord require of you? To act justly and to love mercy and to walk humbly with your God.",
	"Matt 25:40              The King will reply, 'I tell you the truth, whatever you did for one of the least of these brothers of mine, you did for me.",
	"Matt 28:19-20           Therefore go and make disciples of all nations, baptizing them in the name of the Father and of the Son and of the Holy Spirit, and teaching them to obey everything I have commanded you. And surely I am with you always, to the very end of the age.",
	"Matt 5:16                 In the same way, let your light shine before men, that they may see your good deeds and praise your Father in heaven.",
	"Ephesians 6:12          For our struggle is not against flesh and blood, but against the rulers, against the authorities, against the powers of this dark world and against the spiritual forces of evil in the heavenly realms.",
	"Genesis 1:1             In the beginning, God created the heavens and the earth.",
	"Genesis 1:26            Then God said, 'Let us make man in our image, after our likeness. And let them have dominion over the fish of the sea and over the birds of the heavens and over the livestock and over all the earth and over every creeping thing that creeps on the earth.",
	"Genesis 1:27            So God created man in his own image, in the image of God he created him; male and female he created them.",
	"Joshua 1:8              This Book of the Law shall not depart from your mouth, but you shall meditate on it day and night, so that you may be careful to do according to all that is written in it. For then you will make your way prosperous, and then you will have good success.",
	"Psalm 37:4              Delight yourself in the Lord, and he will give you the desires of your heart.",
	"Psalm 133:1-2           Behold, how good and pleasant it is when brothers dwell in unity! It is like the precious oil on the head, running down on the beard, on the beard of Aaron, running down on the collar of his robes!",
	"Isaiah 26:3             You keep him in perfect peace whose mind is stayed on you, because he trusts in you.",
	"Isaiah 40:31            But they who wait for the Lord shall renew their strength; they shall mount up with wings like eagles; they shall run and not be weary; they shall walk and not faint.",
	"Isaiah 53:6             All we like sheep have gone astray; we have turned-every one-to his own way; and the Lord has laid on him the iniquity of us all.",
	"Jer 29:11               For I know the plans I have for you, declares the Lord, plans for welfare and not for evil, to give you a future and a hope.",
	"Micah 6:8               He has told you, O man, what is good; and what does the Lord require of you but to do justice, and to love kindness, and to walk humbly with your God?",
	"Matt 5:16               In the same way, let your light shine before others, so that they may see your good works and give glory to your Father who is in heaven.",
	"Matt 11:28-30           Come to me, all who labor and are heavy laden, and I will give you rest. Take my yoke upon you, and learn from me, for I am gentle and lowly in heart, and you will find rest for your souls. For my yoke is easy, and my burden is light.",
	"Matt 22:37              And he said to him, 'You shall love the Lord your God with all your heart and with all your soul and with all your mind.",
	"Mat 28:18               And Jesus came and said to them, 'All authority in heaven and on earth has been given to me.",
	"Matt 28:19-20           Go therefore and make disciples of all nations, baptizing them in the name of the Father and of the Son and of the Holy Spirit, teaching them to observe all that I have commanded you. And behold, I am with you always, to the end of the age.",
	"John 1:1                   In the beginning was the Word, and the Word was with God, and the Word was God.",
	"John 3:17               For God did not send his Son into the world to condemn the world, but in order that the world might be saved through him.",
	"John 5:24               Truly, truly, I say to you, whoever hears my word and believes him who sent me has eternal life. He does not come into judgment, but has passed from death to life.",
	"John 11:25              Jesus said to her, 'I am the resurrection and the life. Whoever believes in me, though he die, yet shall he live,",
	"John 14:27              Peace I leave with you; my peace I give to you. Not as the world gives do I give to you. Let not your hearts be troubled, neither let them be afraid.",
	"John 15:13              Greater love has no one than this, that someone lay down his life for his friends.",
	"John 16:33                I have said these things to you, that in me you may have peace. In the world you will have tribulation. But take heart; I have overcome the world.",
	"Acts 1:8                But you will receive power when the Holy Spirit has come upon you, and you will be my witnesses in Jerusalem and in all Judea and Samaria, and to the end of the earth.",
	"Acts 2:38               And Peter said to them, 'Repent and be baptized every one of you in the name of Jesus Christ for the forgiveness of your sins, and you will receive the gift of the Holy Spirit.",
	"Acts 4:12               And there is salvation in no one else, for there is no other name under heaven given among men by which we must be saved.",
	"Romans 3:23             for all have sinned and fall short of the glory of God,",
	"Romans 6:23             For the wages of sin is death, but the free gift of God is eternal life in Christ Jesus our Lord.",
	"Romans 8:28             And we know that for those who love God all things work together for good, for those who are called according to his purpose.",
	"Romans 10:17            So faith comes from hearing, and hearing through the word of Christ.",
	"Romans 12:1              I appeal to you therefore, brothers, by the mercies of God, to present your bodies as a living sacrifice, holy and acceptable to God, which is your spiritual worship.",
	"Romans 12:2             Do not be conformed to this world, but be transformed by the renewal of your mind, that by testing you may discern what is the will of God, what is good and acceptable and perfect.",
	"Romans 15:13            May the God of hope fill you with all joy and peace in believing, so that by the power of the Holy Spirit you may abound in hope.",
	"1 Cor 6:19              Or do you not know that your body is a temple of the Holy Spirit within you, whom you have from God? You are not your own,",
	"2 Cor 5:17              Therefore, if anyone is in Christ, he is a new creation. The old has passed away; behold, the new has come.",
	"2 Cor 5:21              For our sake he made him to be sin who knew no sin, so that in him we might become the righteousness of God.",
	"Galatians 2:20            I have been crucified with Christ. It is no longer I who live, but Christ who lives in me. And the life I now live in the flesh I live by faith in the Son of God, who loved me and gave himself for me.",
	"Galatians 5:22-23       But the fruit of the Spirit is love, joy, peace, patience, kindness, goodness, faithfulness, gentleness, self-control; against such things there is no law.",
	"Ephesians 2:8-10        For by grace you have been saved through faith. And this is not your own doing; it is the gift of God, not a result of works, so that no one may boast. For we are his workmanship, created in Christ Jesus for good works, which God prepared beforehand, that we should walk in them.",
	"Ephesians 3:20-21       Now to him who is able to do far more abundantly than all that we ask or think, according to the power at work within us, to him be glory in the church and in Christ Jesus throughout all generations, forever and ever. Amen.",
	"Phil 1:6                And I am sure of this, that he who began a good work in you will bring it to completion at the day of Jesus Christ.",
	"Phil 4:13                     I can do all things through him who strengthens me.",
	"Phil 4:19               And my God will supply every need of yours according to his riches in glory in Christ Jesus.",
	"Col 3:12                Put on then, as God's chosen ones, holy and beloved, compassionate hearts, kindness, humility, meekness, and patience,",
	"Col 3:23-24             Whatever you do, work heartily, as for the Lord and not for men, knowing that from the Lord you will receive the inheritance as your reward. You are serving the Lord Christ.",
	"2 Tim 3:16-17           All Scripture is breathed out by God and profitable for teaching, for reproof, for correction, and for training in righteousness, that the man of God may be complete, equipped for every good work.",
	"Hebrews 4:15-16         For we do not have a high priest who is unable to sympathize with our weaknesses, but one who in every respect has been tempted as we are, yet without sin. Let us then with confidence draw near to the throne of grace, that we may receive mercy and find grace to help in time of need.",
	"Hebrews 10:24-25        And let us consider how to stir up one another to love and good works, not neglecting to meet together, as is the habit of some, but encouraging one another, and all the more as you see the Day drawing near.",
	"Hebrews 11:6            And without faith it is impossible to please him, for whoever would draw near to God must believe that he exists and that he rewards those who seek him.",
	"Hebrews 12:1-2          Therefore, since we are surrounded by so great a cloud of witnesses, let us also lay aside every weight, and sin which clings so closely, and let us run with endurance the race that is set before us, looking to Jesus, the founder and perfecter of our faith, who for the joy that was set before him endured the cross, despising the shame, and is seated at the right hand of the throne of God.",
	"James 1:2-3             Count it all joy, my brothers, when you meet trials of various kinds, for you know that the testing of your faith produces steadfastness.",
	"James 1:12              Blessed is the man who remains steadfast under trial, for when he has stood the test he will receive the crown of life, which God has promised to those who love him.",
	"James 5:16              Therefore, confess your sins to one another and pray for one another, that you may be healed. The prayer of a righteous person has great power as it is working.",
	"1 Peter 3:15-16         but in your hearts honor Christ the Lord as holy, always being prepared to make a defense to anyone who asks you for a reason for the hope that is in you; yet do it with gentleness and respect, having a good conscience, so that, when you are slandered, those who revile your good behavior in Christ may be put to shame.",
	"1 John 1:9                If we confess our sins, he is faithful and just to forgive us our sins and to cleanse us from all unrighteousness.",
	"1 John 3:16             By this we know love, that he laid down his life for us, and we ought to lay down our lives for the brothers.",
	"Nicene Creed            We believe in one God, the Father, the Almighty, maker of heaven and earth, of all that is, seen and unseen.  We believe in one Lord, Jesus Christ, the only Son of God, eternally begotten of the Father, God from God, Light from Light, true God from true God, begotten, not made, of one Being with the Father.  Through him all things were made.  For us and for our salvation he came down from heaven: by the power of the Holy Spirit he became incarnate from the Virgin Mary, and was made man.  For our sake he was crucified under Pontius Pilate; he suffered death and was buried.  On the third day he rose again in accordance with the Scriptures; he ascended into heaven and is seated at the right hand of the Father.  He will come again in glory to judge the living and the dead, and his kingdom will have no end.   We believe in the Holy Spirit, the Lord, the giver of life,  who proceeds from the Father and the Son.  With the Father and the Son he is worshiped and glorified.  He has spoken through the Prophets.  We believe in one holy catholic and apostolic Church.  We acknowledge one baptism for the forgiveness of sins.  We look for the resurrection of the dead, and the life of the world to come. Amen.",
	"Apostles' Creed         I believe in God, the Father almighty, Creator of heaven and earth, and in Jesus Christ, his only Son, our Lord, who was conceived by the Holy Spirit, born of the Virgin Mary, suffered under Pontius Pilate, was crucified, died and was buried; he descended into hell; on the third day he rose again from the dead; he ascended into heaven, and is seated at the right hand of God the Father almighty; from there he will come to judge the living and the dead.  I believe in the Holy Spirit, the holy catholic Church, the communion of saints, the forgiveness of sins, the resurrection of the body, and life everlasting. Amen",
	"Lord's Prayer           Our Father who art in heaven, hallowed be thy name.  Thy kingdom come.  Thy will be done on earth as it is in heaven.  Give us this day our daily bread, and forgive us our trespasses, as we forgive those who trespass against us, and lead us not into temptation, but deliver us from evil. [The 1928 BCP adds: For thine is the kingdom, and the power, and the glory, for ever and ever.] Amen."
};

static Window *window;

// This is a scroll layer
static ScrollLayer *scroll_layer;

// We also use a text layer to scroll in the scroll layer
static TextLayer *text_layer;

// The scroll layer can other things in it such as an invert layer
static InverterLayer *inverter_layer;

// Lorum ipsum to have something to scroll

static const int vert_scroll_text_padding = 4;

// Setup the scroll layer on window load
// We do this here in order to be able to get the max used text size
static void window_load(Window *window) {
  Layer *window_layer = window_get_root_layer(window);
  GRect bounds = layer_get_frame(window_layer);
  GRect max_text_bounds = GRect(0, 0, bounds.size.w, 2000);

  // Initialize the scroll layer
  scroll_layer = scroll_layer_create(bounds);

  // This binds the scroll layer to the window so that up and down map to scrolling
  // You may use scroll_layer_set_callbacks to add or override interactivity
  scroll_layer_set_click_config_onto_window(scroll_layer, window);

  // Get the random bible verse
  #include <stdlib.h>
  srand(time(NULL));
  int random_number = rand() % 111 + 0;
	
  // Initialize the text layer
  text_layer = text_layer_create(max_text_bounds);
  // put in the text in layer, this used tobe scroll_layer variable as follows
  // text_layer_set_text(text_layer, scroll_text);
  text_layer_set_text(text_layer, verse[random_number]);
	
  // Change the font to a nice readable one
  // This is system font; you can inspect pebble_fonts.h for all system fonts
  // or you can take a look at feature_custom_font to add your own font
  text_layer_set_font(text_layer, fonts_get_system_font(FONT_KEY_GOTHIC_24_BOLD));

  // Trim text layer and scroll content to fit text box
  GSize max_size = text_layer_get_content_size(text_layer);
  text_layer_set_size(text_layer, max_size);
  scroll_layer_set_content_size(scroll_layer, GSize(bounds.size.w, max_size.h + vert_scroll_text_padding));

  // Add the layers for display
  scroll_layer_add_child(scroll_layer, text_layer_get_layer(text_layer));

  // The inverter layer will highlight some text
  inverter_layer = inverter_layer_create(GRect(0, 0, bounds.size.w, 28));
  scroll_layer_add_child(scroll_layer, inverter_layer_get_layer(inverter_layer));
  layer_add_child(window_layer, scroll_layer_get_layer(scroll_layer));
}



static void window_unload(Window *window) {
  inverter_layer_destroy(inverter_layer);
  text_layer_destroy(text_layer);
  scroll_layer_destroy(scroll_layer);
}

// Main Windows Load
int main(void) {
  window = window_create();

  window_set_window_handlers(window, (WindowHandlers) {
    .load = window_load,
    .unload = window_unload,
  });
  window_stack_push(window, true /* Animated */);
  app_event_loop();
  window_destroy(window);
}
