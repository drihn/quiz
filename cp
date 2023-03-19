package jaaswing;

import java.awt.EventQueue;
import javax.swing.*;
import javax.swing.text.JTextComponent;

import java.awt.*;
import java.awt.event.*;

public class tutionfeecomputation {

	JFrame frame;
	private JTextField txtTotal;
	private final ButtonGroup buttonGroup = new ButtonGroup();
	private final ButtonGroup buttonGroup_1 = new ButtonGroup();

	/**
	 * Launch the application.
	 */
	public static void main(String[] args) {
		EventQueue.invokeLater(new Runnable() {
			public void run() {
				try {
					tutionfeecomputation window2 = new tutionfeecomputation();
					window2.frame.setVisible(true);
				} catch (Exception e) {
					e.printStackTrace();
				}
			}
		});
	}

	/**
	 * Create the application.
	 */
	public tutionfeecomputation() {
		initialize();
	}

	/**
	 * Initialize the contents of the frame.
	 */
	private void initialize() {
		frame = new JFrame();
		frame.getContentPane().setBackground(UIManager.getColor("Button.darkShadow"));
		frame.setBounds(100, 100, 597, 622);
		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		frame.getContentPane().setLayout(null);
		
		JLabel lblNewLabel = new JLabel("ENROLLMENT FORM");
		lblNewLabel.setFont(new Font("Tahoma", Font.BOLD, 25));
		lblNewLabel.setBounds(63, 9, 270, 58);
		lblNewLabel.setHorizontalAlignment(SwingConstants.CENTER);
		frame.getContentPane().add(lblNewLabel);
		
		final JTextField txtIDNum = new JTextField();
		txtIDNum.setBounds(132, 78, 213, 19);
		frame.getContentPane().add(txtIDNum);
		txtIDNum.setColumns(10);
		
		JLabel lblIDNum = new JLabel("ID NUMBER");
		lblIDNum.setFont(new Font("Century Gothic", Font.BOLD, 15));
		lblIDNum.setBounds(33, 77, 109, 19);
		frame.getContentPane().add(lblIDNum);
		
		JLabel lblFirstName = new JLabel("FIRST NAME");
		lblFirstName.setFont(new Font("Century Gothic", Font.BOLD, 15));
		lblFirstName.setBounds(33, 107, 109, 19);
		frame.getContentPane().add(lblFirstName);
		
		final JTextField txtFirstName = new JTextField();
		txtFirstName.setColumns(10);
		txtFirstName.setBounds(132, 108, 213, 19);
		frame.getContentPane().add(txtFirstName);
		
		final JLabel lblLastName = new JLabel("LAST NAME");
		lblLastName.setFont(new Font("Century Gothic", Font.BOLD, 15));
		lblLastName.setBounds(33, 137, 109, 19);
		frame.getContentPane().add(lblLastName);
		
		final JTextField txtLastName = new JTextField();
		txtLastName.setColumns(10);
		txtLastName.setBounds(132, 138, 213, 19);
		frame.getContentPane().add(txtLastName);
		
	
		JLabel lblStudentType = new JLabel("Student Type");
		lblStudentType.setFont(new Font("Century Gothic", Font.BOLD, 17));
		lblStudentType.setBounds(33, 191, 147, 26);
		frame.getContentPane().add(lblStudentType);
		
		final JRadioButton chckbxGoldDiscount = new JRadioButton("Gold Discount");
		buttonGroup.add(chckbxGoldDiscount);
		chckbxGoldDiscount.setFont(new Font("Century Gothic", Font.PLAIN, 15));
		chckbxGoldDiscount.setBackground(UIManager.getColor("Button.darkShadow"));
		chckbxGoldDiscount.setBounds(33, 223, 164, 21);
		frame.getContentPane().add(chckbxGoldDiscount);
		
		final JRadioButton chckbxBlueDiscount = new JRadioButton("Blue Discount");
		buttonGroup.add(chckbxBlueDiscount);
		chckbxBlueDiscount.setFont(new Font("Century Gothic", Font.PLAIN, 15));
		chckbxBlueDiscount.setBackground(UIManager.getColor("Button.darkShadow"));
		chckbxBlueDiscount.setBounds(33, 246, 164, 21);
		frame.getContentPane().add(chckbxBlueDiscount);
		
		final JRadioButton chckbxWhiteDiscount = new JRadioButton("White Discount");
		buttonGroup.add(chckbxWhiteDiscount);
		chckbxWhiteDiscount.setFont(new Font("Century Gothic", Font.PLAIN, 15));
		chckbxWhiteDiscount.setBackground(UIManager.getColor("Button.darkShadow"));
		chckbxWhiteDiscount.setBounds(33, 269, 164, 21);
		frame.getContentPane().add(chckbxWhiteDiscount);
		
		final JRadioButton chckbxContinuing = new JRadioButton("Continuing");
		buttonGroup.add(chckbxContinuing);
		chckbxContinuing.setFont(new Font("Century Gothic", Font.PLAIN, 15));
		chckbxContinuing.setBackground(UIManager.getColor("Button.darkShadow"));
		chckbxContinuing.setBounds(33, 292, 164, 21);
		frame.getContentPane().add(chckbxContinuing);
		
		final JRadioButton chckbxWalkin = new JRadioButton("Walk-in");
		buttonGroup.add(chckbxWalkin);
		chckbxWalkin.setFont(new Font("Century Gothic", Font.PLAIN, 15));
		chckbxWalkin.setBackground(UIManager.getColor("Button.darkShadow"));
		chckbxWalkin.setBounds(33, 316, 164, 21);
		frame.getContentPane().add(chckbxWalkin);
		
		JLabel lblCourse = new JLabel("Course");
		lblCourse.setFont(new Font("Century Gothic", Font.BOLD, 17));
		lblCourse.setBounds(332, 192, 147, 26);
		frame.getContentPane().add(lblCourse);
		
		//List of Tuition fees per Course
		
		final StudentInfo Tourism = new StudentInfo();
		Tourism.setTourism();

		final StudentInfo ComputerScience = new StudentInfo();
		ComputerScience.setComputerScience();

		final StudentInfo Engineering = new StudentInfo();
		Engineering.setEngineering();

		final StudentInfo Nursing = new StudentInfo();
		Nursing.setNursing();

		final StudentInfo Architecture = new StudentInfo();
		Architecture.setArchitecture();
			        
		
		final JRadioButton chckbxTourism = new JRadioButton("Tourism");
		buttonGroup_1.add(chckbxTourism);
		chckbxTourism.setFont(new Font("Century Gothic", Font.PLAIN, 15));
		chckbxTourism.setBackground(UIManager.getColor("Button.darkShadow"));
		chckbxTourism.setBounds(332, 224, 164, 21);
		frame.getContentPane().add(chckbxTourism);
		
		final JRadioButton chckbxCompSci = new JRadioButton("Computer Science");
		buttonGroup_1.add(chckbxCompSci);
		chckbxCompSci.setFont(new Font("Century Gothic", Font.PLAIN, 15));
		chckbxCompSci.setBackground(UIManager.getColor("Button.darkShadow"));
		chckbxCompSci.setBounds(332, 247, 164, 21);
		frame.getContentPane().add(chckbxCompSci);
		
		final JRadioButton chckbxEngr = new JRadioButton("Engineering");
		buttonGroup_1.add(chckbxEngr);
		chckbxEngr.setFont(new Font("Century Gothic", Font.PLAIN, 15));
		chckbxEngr.setBackground(UIManager.getColor("Button.darkShadow"));
		chckbxEngr.setBounds(332, 270, 164, 21);
		frame.getContentPane().add(chckbxEngr);
		
		final JRadioButton chckbxNursing = new JRadioButton("Nursing");
		buttonGroup_1.add(chckbxNursing);
		chckbxNursing.setFont(new Font("Century Gothic", Font.PLAIN, 15));
		chckbxNursing.setBackground(UIManager.getColor("Button.darkShadow"));
		chckbxNursing.setBounds(332, 293, 164, 21);
		frame.getContentPane().add(chckbxNursing);
		
		final JRadioButton chckbxArchi = new JRadioButton("Architecture");
		buttonGroup_1.add(chckbxArchi);
		chckbxArchi.setFont(new Font("Century Gothic", Font.PLAIN, 15));
		chckbxArchi.setBackground(UIManager.getColor("Button.darkShadow"));
		chckbxArchi.setBounds(332, 316, 164, 21);
		frame.getContentPane().add(chckbxArchi);
		
		JLabel lblTotal = new JLabel("TOTAL:");
		lblTotal.setHorizontalAlignment(SwingConstants.LEFT);
		lblTotal.setFont(new Font("Century Gothic", Font.BOLD, 15));
		lblTotal.setBounds(127, 515, 110, 32);
		frame.getContentPane().add(lblTotal);
		
		txtTotal = new JTextField();
		txtTotal.setFont(new Font("Century Gothic", Font.PLAIN, 15));
		txtTotal.setBounds(189, 515, 254, 32);
		frame.getContentPane().add(txtTotal);
		txtTotal.setColumns(10);
		
		JButton btnCompute = new JButton("COMPUTE");
		btnCompute.setBackground(new Color(135, 206, 235));
		btnCompute.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				if (chckbxGoldDiscount.isSelected()) {
					if (chckbxTourism.isSelected()) {
						txtTotal.setText("P" + Tourism.getGoldDisc()); 
					}
					else if (chckbxCompSci.isSelected()) {
						txtTotal.setText("P" + ComputerScience.getGoldDisc()); 
					}
					else if (chckbxEngr.isSelected()) {
						txtTotal.setText("P" + Engineering.getGoldDisc()); 
					}
					else if (chckbxNursing.isSelected()) {
						txtTotal.setText("P" + Nursing.getGoldDisc()); 
					}
					else if (chckbxArchi.isSelected()) {
						txtTotal.setText("P" + Architecture.getGoldDisc()); 
					}
					else {
						JOptionPane.showMessageDialog(null, "Please select at least one of the choices." );
						frame.dispose();
					}
				}
				if (chckbxBlueDiscount.isSelected()) {
					if (chckbxTourism.isSelected()) {
						txtTotal.setText("P" + Tourism.getBlueDisc()); 
					}
					else if (chckbxCompSci.isSelected()) {
						txtTotal.setText("P" + ComputerScience.getBlueDisc()); 
					}
					else if (chckbxEngr.isSelected()) {
						txtTotal.setText("P" + Engineering.getBlueDisc()); 
					}
					else if (chckbxNursing.isSelected()) {
						txtTotal.setText("P" + Nursing.getBlueDisc()); 
					}
					else if (chckbxArchi.isSelected()) {
						txtTotal.setText("P" + Architecture.getBlueDisc()); 
					}
					else {
						JOptionPane.showMessageDialog(null, "Please select at least one of the choices." );
						frame.dispose();
					}
				}
				if (chckbxWhiteDiscount.isSelected()) {
					if (chckbxTourism.isSelected()) {
						txtTotal.setText("P" + Tourism.getWhiteDisc()); 
					}
					else if (chckbxCompSci.isSelected()) {
						txtTotal.setText("P" + ComputerScience.getWhiteDisc()); 
					}
					else if (chckbxEngr.isSelected()) {
						txtTotal.setText("P" + Engineering.getWhiteDisc()); 
					}
					else if (chckbxNursing.isSelected()) {
						txtTotal.setText("P" + Nursing.getWhiteDisc()); 
					}
					else if (chckbxArchi.isSelected()) {
						txtTotal.setText("P" + Architecture.getWhiteDisc()); 
					}
					else {
						JOptionPane.showMessageDialog(null, "Please select at least one of the choices." );
						frame.dispose();
					}
				}
				if (chckbxContinuing.isSelected()) {
					if (chckbxTourism.isSelected()) {
						txtTotal.setText("P" + Tourism.getContDisc()); 
					}
					else if (chckbxCompSci.isSelected()) {
						txtTotal.setText("P" + ComputerScience.getContDisc()); 
					}
					else if (chckbxEngr.isSelected()) {
						txtTotal.setText("P" + Engineering.getContDisc()); 
					}
					else if (chckbxNursing.isSelected()) {
						txtTotal.setText("P" + Nursing.getContDisc()); 
					}
					else if (chckbxArchi.isSelected()) {
						txtTotal.setText("P" + Architecture.getContDisc()); 
					}
					else {
						JOptionPane.showMessageDialog(null, "Please select at least one of the choices." );
						frame.dispose();
					}
				}
				if (chckbxWalkin.isSelected()) {
					if (chckbxTourism.isSelected()) {
						txtTotal.setText("P" + (Tourism.getTuition() + Tourism.getMisc())); 
					}
					else if (chckbxCompSci.isSelected()) {
						txtTotal.setText("P" + (ComputerScience.getTuition() + ComputerScience.getMisc())); 
					}
					else if (chckbxEngr.isSelected()) {
						txtTotal.setText("P" + (Engineering.getTuition() + Engineering.getMisc())); 
					}
					else if (chckbxNursing.isSelected()) {
						txtTotal.setText("P" + (Nursing.getTuition() + Nursing.getMisc())); 
					}
					else if (chckbxArchi.isSelected()) {
						txtTotal.setText("P" + (Architecture.getTuition() + Architecture.getMisc())); 
					}
					else {
						JOptionPane.showMessageDialog(null, "Please select at least one of the choices." );
						frame.dispose();
					}
				}
			JTextComponent txtStudentInfo = null;
			txtStudentInfo.setText(txtIDNum.getText() + " \n " + txtFirstName.getText() + " " + txtLastName.getText());
			}
		});
		btnCompute.setFont(new Font("Century Gothic", Font.BOLD, 16));
		btnCompute.setBounds(33, 375, 153, 40);
		frame.getContentPane().add(btnCompute);
		
		JButton btnReset = new JButton("RESET");
		btnReset.setBackground(new Color(135, 206, 235));
		btnReset.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				txtIDNum.setText(null);
				txtFirstName.setText(null);
				txtLastName.setText(null);
				txtTotal.setText(null);
				chckbxTourism.setSelected(false);
				chckbxCompSci.setSelected(false);
				chckbxEngr.setSelected(false);
				chckbxNursing.setSelected(false);
				chckbxArchi.setSelected(false);
				chckbxGoldDiscount.setSelected(false);
				chckbxBlueDiscount.setSelected(false);
				chckbxWhiteDiscount.setSelected(false);
				chckbxContinuing.setSelected(false);
				chckbxWalkin.setSelected(false);
			}
		});
		btnReset.setFont(new Font("Century Gothic", Font.BOLD, 16));
		btnReset.setBounds(221, 375, 153, 40);
		frame.getContentPane().add(btnReset);

	}
}
